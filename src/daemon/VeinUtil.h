
#include <errno.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dlfcn.h>
#include <termios.h>
#include <fcntl.h>
#include <pthread.h>
//Finger Vein Headfile
#include "XG_Protocol.h"

typedef int (*SendDataCallBack)(int total, int sent);


/**
*Finger Vein Device args
*
*/



#define DEMO_MODEL 		0  //指静脉模块操作应用实例,指静脉设备支持UART串口或USB HID模式，不支持USB CDROM驱动模式
#define DEMO_LIB_1    1  //1:1验证算法库应用实例，精度较低，免费提供
#define DEMO_LIB_N    2  //1：N识别算法库应用实例，精度高，收费
#define DEMO_MODE     DEMO_MODEL
#define USB_DEV_N			2 	//最大支持USB设备的个数，编号从1开始
#define DataDeal_SUCCESS  1
#define DataDeal_FAIL  0
#define ENROLL_BUF_SIZE  20*1024
#define FILENAME_LEN    200



static char* so_file = "/usr/lib/libvein.so";
static char sQuality[3][20] = {"bad", "medium", "good"};
static int EnrollTempNum = 0;
static int EnrollMaxUser = 0;
static int EnrollUserNum = 0;
static int MaxTempNum;
static char mode[10] = "0";
static int ThreadStop = 1;
int usbNum = 0;




struct Thread_Argv
{
    UINT8 iDevAddress;
    HANDLE hDevHandle;
};

struct Thread_Argv thArgv;

//指静脉模块设备操作相关函数
typedef struct _FUN_COM
{
    //获取版本号
    int (*XG_GetVeinLibVer) (char *pVer);

    //获取当前连接的USB指静脉设备的个数，USB驱动必须是HID模式
    int (*XG_DetectUsbDev) ();

    //打开并连接指静脉设备
    int (*XG_OpenVeinDev) (char* pDev, int Baud, int Addr, UINT8 Password[16], int Len, PHANDLE pHandle);

    //关闭指静脉设备
    int (*XG_CloseVeinDev) (UINT8 Addr, HANDLE Handle);

    //发送一个指令包
    int (*XG_SendPacket) (UINT8 Addr, UINT8 Cmd, UINT8 Encode, UINT8 Len, UINT8* pData, HANDLE Handle);

    //接收一个指令包
    int (*XG_RecvPacket)(UINT8 Addr, UINT8* pData, HANDLE Handle);

    //写入数据
    int (*XG_WriteData) (UINT8 Addr, UINT8 Cmd, UINT8* pData, UINT32 size, HANDLE Handle);

    //读取数据
    int (*XG_ReadData) (UINT8 Addr, UINT8 Cmd, UINT8* pData, UINT32 size, HANDLE Handle);

    //更新指静脉固件
    int (*XG_Upgrade) (int iAddr, const char* fname, HANDLE Handle);

    //写入指静脉登记数据
    int (*XG_WriteDevEnrollData) (int iAddr, UINT32 User, UINT8 *pBuf, HANDLE Handle);

    //读取指静脉登记数据
    int (*XG_ReadDevEnrollData) (int iAddr, UINT32 User, UINT8 *pBuf, UINT32 *pSize, HANDLE Handle);

    //获取数据包发送状态，固件升级时间较长用于进度条
    int (*XG_SetCallBack) (HANDLE Handle, SendDataCallBack pSendData);

} FunCom_t, *pFunCom_t;

//指静脉算法库操作相关函数
typedef struct _FUN_VEIN
{
    //创建算法库实例
    int (*XGV_CreateVein) (PHANDLE pHandle, int UserNum);

    //销毁算法库实例
    int (*XGV_DestroyVein) (HANDLE hHandle);

    //登记
    int (*XGV_Enroll) (HANDLE hHandle, UINT32 User, UINT8* pBuf, UINT32 size, UINT8 CheckSameFinger, UINT16* pQuality);

    //验证，一般1：N识别比对时使用
    int (*XGV_Verify) (HANDLE hHandle, UINT32* pUser, UINT32 Num, UINT8* pBuf, UINT32 size, UINT8 Group, UINT16* pQuality);

    //1:1验证
    UINT8* (*XGV_CharaVerify) (HANDLE hHandle, UINT8* pEnroll, int EnrollSize, UINT8* pChara, int CharaSize);

    //获取1:1验证成功后自学习后的登记数据，可替换原有的登记数据
    int (*XGV_GetCharaVerifyLearn) (HANDLE hHandle, UINT8* pBuf);

    //设置安全等级，1,2,3，安全等级越高误识率越低
    int (*XGV_SetSecurity) (HANDLE hHandle, UINT8 Level);

    //获取登记数据
    int (*XGV_GetEnrollData) (HANDLE hHandle, UINT32 User, UINT8* pData, UINT32* pSize);

    //获取登记数据登记时候指定的用户ID
    int (*XGV_GetEnrollUserId) (HANDLE hHandle, UINT8* pData);

    //保存登记数据
    int (*XGV_SaveEnrollData) (HANDLE hHandle, UINT32 User, UINT8 Group, UINT8* pData, UINT16 Size);

    //删除登记数据
    int (*XGV_DelEnrollData) (HANDLE hHandle, UINT32 User);

    //获取登记用户数
    int (*XGV_GetEnrollNum) (HANDLE hHandle, UINT32 *pMaxUser, UINT32 *pMaxTempNum, UINT32 *pEnrollUser, UINT32 *pEnrollTempNum);

    //获取空ID
    int (*XGV_GetEnptyID) (HANDLE hHandle, UINT32 *pEnptyId, UINT32 StartId, UINT32 EndId);

    //获取指定用户登记的模板数
    int (*XGV_GetUserTempNum) (HANDLE hHandle, UINT32 User, UINT32 *pTempNum);
} FunVein_t, *pFunVein_t;

static FunCom_t m_ComFun;
static FunVein_t m_VeinFun;
static HANDLE hDevHandle = 0;
static HANDLE hDevHandleArray[USB_DEV_N];
static UINT8 DevId[USB_DEV_N] = {1, 2};
static int ThreadStopArray[USB_DEV_N] = {1, 1};
static unsigned char iDevAddress = 0;
static HANDLE VeinHandle = 0;
UINT8 charaData[ENROLL_BUF_SIZE];
static struct	Thread_Argv thArgvArray[USB_DEV_N];


static void* GetDlFun(void *Handle, char *pFunName)
{
    char* eInfo = NULL;
    void* fun = NULL;

    fun = dlsym(Handle, pFunName);
    eInfo = dlerror();
    if(eInfo != NULL)
    {
        printf("FUN:%s error:%s\n", pFunName, eInfo);
        return NULL;
    }
    return fun;
}



static int space_vein_init()
{
    int i;
    char* eInfo;
    void *hLibHandle = NULL;
    memset(&m_VeinFun, 0, sizeof(m_VeinFun));
    printf("Open so:%s\n", so_file);
    hLibHandle = dlopen(so_file, RTLD_LAZY);
    if(hLibHandle == NULL)
    {
        eInfo = dlerror();
        printf("libVeinApi.so error...\n%s\n",eInfo);
        printf("VeinApiLinux Error\n");
        return -1;
    }

    m_ComFun.XG_GetVeinLibVer = GetDlFun(hLibHandle, "XG_GetVeinLibVer");
    m_ComFun.XG_DetectUsbDev = GetDlFun(hLibHandle, "XG_DetectUsbDev");
    m_ComFun.XG_OpenVeinDev = GetDlFun(hLibHandle, "XG_OpenVeinDev");
    m_ComFun.XG_CloseVeinDev = GetDlFun(hLibHandle, "XG_CloseVeinDev");
    m_ComFun.XG_SendPacket = GetDlFun(hLibHandle, "XG_SendPacket");
    m_ComFun.XG_RecvPacket = GetDlFun(hLibHandle, "XG_RecvPacket");
    m_ComFun.XG_WriteData = GetDlFun(hLibHandle, "XG_WriteData");
    m_ComFun.XG_ReadData = GetDlFun(hLibHandle, "XG_ReadData");
    m_ComFun.XG_Upgrade = GetDlFun(hLibHandle, "XG_Upgrade");
    m_ComFun.XG_WriteDevEnrollData = GetDlFun(hLibHandle, "XG_WriteDevEnrollData");
    m_ComFun.XG_ReadDevEnrollData = GetDlFun(hLibHandle, "XG_ReadDevEnrollData");
    m_ComFun.XG_SetCallBack = GetDlFun(hLibHandle, "XG_SetCallBack");

    m_VeinFun.XGV_CreateVein = GetDlFun(hLibHandle, "XGV_CreateVein");
    m_VeinFun.XGV_DestroyVein = GetDlFun(hLibHandle, "XGV_DestroyVein");
    m_VeinFun.XGV_SetSecurity = GetDlFun(hLibHandle, "XGV_SetSecurity");
    m_VeinFun.XGV_Enroll = GetDlFun(hLibHandle, "XGV_Enroll");
    m_VeinFun.XGV_Verify = GetDlFun(hLibHandle, "XGV_Verify");
    m_VeinFun.XGV_CharaVerify = GetDlFun(hLibHandle, "XGV_CharaVerify");
    m_VeinFun.XGV_GetCharaVerifyLearn = GetDlFun(hLibHandle, "XGV_GetCharaVerifyLearn");
    m_VeinFun.XGV_SaveEnrollData = GetDlFun(hLibHandle, "XGV_SaveEnrollData");
    m_VeinFun.XGV_GetEnrollData = GetDlFun(hLibHandle, "XGV_GetEnrollData");
    m_VeinFun.XGV_DelEnrollData = GetDlFun(hLibHandle, "XGV_DelEnrollData");
    m_VeinFun.XGV_GetEnrollNum = GetDlFun(hLibHandle, "XGV_GetEnrollNum");
    m_VeinFun.XGV_GetEnptyID = GetDlFun(hLibHandle, "XGV_GetEnptyID");
    m_VeinFun.XGV_GetUserTempNum = GetDlFun(hLibHandle, "XGV_GetUserTempNum");
    m_VeinFun.XGV_GetEnrollUserId = GetDlFun(hLibHandle, "XGV_GetEnrollUserId");

    printf("space vein init \n");
   return 0;
}



static void GetInput(char* input)
{
    char str[255];
    int len = 0;

    fflush(stdin);
    fgets(str, 255, stdin);
    len = strlen(str);
    strncpy(input, str, len - 1);
    input[len -1] = 0;
}



static void getiDevAdr(char *str)
{

        memset(&hDevHandle, 0, sizeof(hDevHandle));


        iDevAddress = atoi(str);
        if(iDevAddress < 1 || iDevAddress > USB_DEV_N)
        {
            printf("DevID Error!\n");

        }
        memcpy(&hDevHandle, &hDevHandleArray[iDevAddress - 1], sizeof(hDevHandleArray[iDevAddress - 1]));
        printf("iDevAddress %d, hDevHandle 0x%X\n", iDevAddress, (int)hDevHandleArray[iDevAddress - 1]);
        printf("get device adress success \n");

}


static void space_veindev_data_get(char *dev,int ret)
{

    if(m_ComFun.XG_OpenVeinDev)
    {
        char Password[16] = "00000000";
        if(strcmp(dev, "usb") == 0 || strcmp(dev, "USB") == 0)
        {

            if(m_ComFun.XG_DetectUsbDev)
            {
                int i = 0;
                usbNum = m_ComFun.XG_DetectUsbDev();
                if(usbNum > 0)
                {
                    for(i = 0; i < usbNum; i++)
                    {
                        sprintf(Password,"00000000");
                        iDevAddress = DevId[i];
                        ret = m_ComFun.XG_OpenVeinDev(dev, 0, iDevAddress, (UINT8*)Password, strlen(Password), &hDevHandleArray[i]);
                        printf("iDevAddress %d, ret %d, hDevHandle1 0x%X\n", iDevAddress, ret, (int)hDevHandleArray[i]);
                        thArgvArray[i].iDevAddress = DevId[i];
                        thArgvArray[i].hDevHandle = hDevHandleArray[i];
                    }
                }
                printf("usbNum %d\n", usbNum);
            }

        } else {
            int baud = 115200; //串口波特率
            ret = m_ComFun.XG_OpenVeinDev(dev, baud, iDevAddress, (UINT8*)Password, strlen(Password), &hDevHandle);
        }


    } else {
        printf("m_ComFun.XG_OpenVeinDev is NULL\n");
        return -1;
    }

    char Ver[100] = "";
    if(m_ComFun.XG_GetVeinLibVer(Ver) == XG_ERR_SUCCESS)
    {
        printf("XG_GetVeinLibVer %s\n", Ver);
    }

    if(m_VeinFun.XGV_CreateVein(&VeinHandle, 100) == XG_ERR_SUCCESS)
    {
        if(VeinHandle == NULL)
        {
            printf("Init Vein Lib Fail, VeinHandle is NULL\n");
            return;
        }
        printf("Init Vein Lib OK\n");
        ret = m_VeinFun.XGV_SetSecurity(VeinHandle, 1);
        printf("XGV_SetSecurity ret %d\n", ret);
        ReadXgd(VeinHandle, 0, 100);
    }

    if(m_VeinFun.XGV_CreateVein(&VeinHandle, 1) == XG_ERR_SUCCESS)
    {
        printf("Init Vein Lib OK\n");
        ret = m_VeinFun.XGV_SetSecurity(VeinHandle, 1);
        printf("XGV_SetSecurity ret %d\n", ret);
    }
    printf("space vein device init success \n");
 }


