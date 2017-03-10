
#ifndef  _XG_PROTOCOL_
#define  _XG_PROTOCOL_

#if	defined(__cplusplus)
extern	"C"	{
#endif	/* defined(__cplusplus) */

#if !defined NULL
	#define NULL            0
#endif

typedef signed char         INT8, *PINT8;
typedef signed short        INT16, *PINT16;
typedef signed int          INT32, *PINT32;
typedef unsigned char       UINT8, *PUINT8;
typedef unsigned short      UINT16, *PUINT16;
typedef unsigned int        UINT32, *PUINT32;
typedef char 				*LPCSTR;
typedef void 				*HANDLE;
typedef HANDLE 				*PHANDLE;

/******************************ͨѶЭ��*****************************************/
#define XG_PREFIX_CODE                0xAABB //����ʶ

#define USB_DATA_PACKET_SIZE          4096-2
#define COM_DATA_PACKET_SIZE          512-2 //�������ݰ����Ϊ512�ֽ�
#define HID_DATA_PACKET_SIZE          (60*60)-2

/*�豸���ָ��*/
#define XG_CMD_CONNECTION             0x01 //�����豸,�����8λ�������룬Ĭ������ȫΪ0(0x30)
#define XG_CMD_CLOSE_CONNECTION       0x02 //�ر�����
#define XG_CMD_GET_SYSTEM_INFO        0x03 //��ȡ�汾�ź�������Ϣ
#define XG_CMD_FACTORY_SETTING        0x04 //�ָ���������
#define XG_CMD_SET_DEVICE_ID          0x05 //�����豸���0-255
#define XG_CMD_SET_BAUDRATE           0x06 //���ò�����0-4
#define XG_CMD_SET_SECURITYLEVEL      0x07 //���ð�ȫ�ȼ�0-4
#define XG_CMD_SET_TIMEOUT            0x08 //���õȴ���ָ���볬ʱ1-255��
#define XG_CMD_SET_DUP_CHECK          0x09 //�����ظ���¼���0-1
#define XG_CMD_SET_PASSWORD           0x0A //����ͨ������
#define XG_CMD_CHECK_PASSWORD         0x0B //��������Ƿ���ȷ
#define XG_CMD_REBOOT                 0x0C //��λ�����豸
#define XG_CMD_SET_SAME_FV            0x0D //�Ǽǵ�ʱ�����Ƿ�Ϊͬһ����ָ
#define XG_CMD_SET_USB_MODE           0x0E //����USB����ģʽ 

/*ʶ�����ָ��*/
#define XG_CMD_FINGER_STATUS          0x10 //�����ָ����״̬
#define XG_CMD_CLEAR_ENROLL           0x11 //���ָ��ID��¼����
#define XG_CMD_CLEAR_ALL_ENROLL       0x12 //�������ID��¼����
#define XG_CMD_GET_EMPTY_ID           0x13 //��ȡ�գ��޵�¼���ݣ�ID
#define XG_CMD_GET_ENROLL_INFO        0x14 //��ȡ�ܵ�¼�û�����ģ����
#define XG_CMD_GET_ID_INFO            0x15 //��ȡָ��ID��¼��Ϣ
#define XG_CMD_ENROLL                 0x16 //ָ��ID��¼
#define XG_CMD_VERIFY                 0x17 //1:1��֤��1:Nʶ��
#define XG_CMD_IDENTIFY_FREE          0x18 //FREEʶ��ģʽ���Զ�ʶ�𲢷���״̬
#define XG_CMD_CANCEL                 0x19 //ȡ��FREEʶ��ģʽ
#define XG_CMD_RAM_MODE               0x1A //�ڴ����ģʽ
#define XG_CMD_VERIFY_MULTI           0x1B //�������ID��֤

/******************************�߼�ָ��****************************************/
/*���ݶ�д���ָ��*/
#define XG_CMD_READ_DATA              0x20 //���豸��ȡ����
#define XG_CMD_WRITE_DATA             0x21 //д�����ݵ��豸
#define XG_CMD_READ_ENROLL            0x22 //��ȡָ��ID��¼����
#define XG_CMD_WRITE_ENROLL           0x23 //д�루���ǣ�ָ��ID��¼����
#define XG_CMD_GET_VEIN_IMAGE         0X24 //�ɼ�ָ����ͼ�����ݵ�����
#define XG_CMD_WRITE_IMAGE            0x25 //д��ͼ������
#define XG_CMD_GET_DEBUG              0x26 //��ȡ������Ϣ
#define XG_CMD_UPGRADE                0x27 //д�����������������Զ�����
#define XG_CMD_GET_CHARA              0x28 //�ɼ�����ȡ���������� 
#define XG_CMD_READ_USER_DATA         0x29 //���û���չ�洢����ȡ���ݣ����4K
#define XG_CMD_WRITE_USER_DATA        0x2A //д�����ݵ��û���չ�洢�������4K

/******************************��չָ��****************************************/
/*���ݶ�д���ָ��*/
#define XG_CMD_GET_DOORCTRL           0x30 //��ȡ�Ž����� 
#define XG_CMD_SET_DOORCTRL           0x31 //�����Ž�����
#define XG_CMD_OPEN_DOOR              0x32 //����
#define XG_CMD_READ_LOG               0x33 //��ȡ�Ž�������־
#define XG_CMD_SET_DEVNAME            0x34 //�����豸����
#define XG_CMD_GET_DATETIME           0x35 //��ȡ�Ž�ʵʱʱ��
#define XG_CMD_SET_DATETIME           0x36 //�����Ž�ʵʱʱ��
#define XG_CMD_KEY_CTRL               0x37 //���Ͱ���
#define XG_CMD_ENROLL_EXT             0x38 //��չ�����Ǽ�
#define XG_CMD_VERIFY_EXT             0x39 //��չ������֤
#define XG_CMD_DEL_LOG                0x3a //ɾ���Ž���־
#define XG_CMD_PLAY_VOICE             0x3b //��������
#define XG_CMD_GET_USER_NAME          0x3C //��ȡ�û�����
#define XG_CMD_SET_USER_NAME          0x3D //�޸�д���û�����
#define XG_CMD_GET_USER_CG            0x3E //��ȡ�û����ź���� 
#define XG_CMD_SET_USER_CG            0x3F //�޸�д���û����ź���� 
#define XG_CMD_DEL_USER_INFO          0x40 //��������û���Ϣ 
#define XG_CMD_GET_ADMIN_PWD          0x41 //��ȡ����Ա���룬һ������Ա������һ������
#define XG_CMD_SET_ADMIN_PWD          0x42 //�޸�д�����Ա���� 


/******************************�������****************************************/
#define	XG_ERR_SUCCESS                0x00 //�����ɹ�
#define	XG_ERR_FAIL                   0x01 //����ʧ��
#define XG_ERR_COM                    0x02 //ͨѶ����
#define XG_ERR_DATA                   0x03 //����У�����
#define XG_ERR_INVALID_PWD            0x04 //�������
#define XG_ERR_INVALID_PARAM          0x05 //��������
#define XG_ERR_INVALID_ID             0x06 //ID����
#define XG_ERR_EMPTY_ID               0x07 //ָ��IDΪ�գ��޵�¼���ݣ�
#define XG_ERR_NOT_ENOUGH             0x08 //���㹻��¼�ռ�
#define XG_ERR_NO_SAME_FINGER         0x09 //����ͬһ����ָ
#define XG_ERR_DUPLICATION_ID         0x0A //����ͬ��¼ID
#define XG_ERR_TIME_OUT               0x0B //�ȴ���ָ���볬ʱ
#define XG_ERR_VERIFY                 0x0C //��֤ʧ��
#define XG_ERR_NO_NULL_ID             0x0D //���޿�ID
#define XG_ERR_BREAK_OFF              0x0E //�����ж� 
#define XG_ERR_NO_CONNECT             0x0F //δ����
#define XG_ERR_NO_SUPPORT             0x10 //��֧�ִ˲���
#define XG_ERR_NO_VEIN                0x11 //�޾������� 
#define XG_ERR_MEMORY                 0x12 //�ڴ治��
#define XG_ERR_NO_DEV                 0x13 //�豸������
#define XG_ERR_ADDRESS                0x14 //�豸��ַ����
#define XG_ERR_NO_FILE                0x15 //�ļ�������
#define XG_ERR_LICENSE                0x80

/******************************״̬����****************************************/
#define XG_INPUT_FINGER               0x20 //���������ָ
#define XG_RELEASE_FINGER             0x21 //�����ÿ���ָ

#define API_EXPORTED	

///////////////////////////////////////////////////////////////////////////////////
//�㷨���������
int API_EXPORTED	XG_GetVeinLibVer(char *pVer);

	/*********************************************************************
	���ܣ���ʼ������ʶ���㷨��
	������
	pHandle:���ָ��
	UserNum:�û���,1:1��֤�˲���Ϊ0��1�� 1��N��֤�˲������Ϊ10000,�ɷ�����֤
	����ֵ��
	XG_ERR_INVALID_PARAM����������
	XG_ERR_SUCCESS����ʼ���ɹ�
	XG_ERR_FAIL����ʼ��ʧ��
	**********************************************************************/
extern int API_EXPORTED	XG_CreateVein(PHANDLE pHandle, int UserNum);

	/*********************************************************************
	���ܣ��˳��رվ���ʶ���㷨��
	������
	��
	����ֵ��
	XG_ERR_SUCCESS���رճɹ�
	**********************************************************************/
int API_EXPORTED	XG_DestroyVein(HANDLE hHandle);

int API_EXPORTED XG_ImgVeinChara(HANDLE hHandle, UINT8* pImg, UINT8* pChara, UINT32* pSize, UINT16* pQuality);

	/*********************************************************************
	���ܣ�����һ�������������ڴ��ݴ�
	������
	User(����):�û���ţ�ȡֵ��ΧΪ1-����û����
	pBuf(����):�������ݣ�ͼ�����ݻ���������
	size(����):�������ݴ�С
	CheckSameFinger(����):�Ƿ����ͬһ����ָ�ļ��0������⣬1�����
	pQuality(���):��������
	����ֵ��
	XG_ERR_INVALID_PARAM����������
	XG_ERR_DATA�����ݴ���
	XG_ERR_NO_SAME_FINGER������ͬһ����ָ
	XG_ERR_SUCCESS���Ǽǳɹ�
	XG_ERR_FAIL���Ǽ�ʧ��
	**********************************************************************/
int API_EXPORTED XG_Enroll(HANDLE hHandle, UINT32 User, UINT8* pBuf, UINT32 size, UINT8 CheckSameFinger, UINT16* pQuality);

	/*********************************************************************
	���ܣ���֤����
	������
	pUser(����/���):�û����ָ�룬0��1��Nʶ��ģʽ�� 1-����û���ţ�1:1��֤ģʽ
	                 ����Ϊ0��ʾ��֤ʧ�ܣ�1-����û����Ϊ��֤�ɹ����û����
	pBuf(����):�������ݣ�ͼ�����ݻ���������
	size(����):�������ݴ�С
	Group(����):���
	pQuality(���):��������
	����ֵ��
	XG_ERR_INVALID_PARAM����������
	XG_ERR_DATA�����ݴ���
	XG_ERR_SUCCESS����֤�ɹ�
	XG_ERR_FAIL����֤ʧ��
	**********************************************************************/
int API_EXPORTED XG_Verify(HANDLE hHandle, UINT32* pUser, UINT8* pBuf, UINT32 size, UINT8 Group, UINT16* pQuality);

/*********************************************************************
	���ܣ���ID��֤����,�ʺ�һ���û��ǼǶ����ָ�����,�����������Ķ��ID
	������
	pUser(����/���):��ʼ��֤��ID��,ȡֵ��Χ1-���ID��
	                 ����Ϊ0��ʾ��֤ʧ�ܣ�1-����û����Ϊ��֤�ɹ����û����
	Num:pUser��ʼ�������ȶ�ID��
	pBuf(����):�������ݣ�ͼ�����ݻ���������
	size(����):�������ݴ�С
	Group(����):���
	pQuality(���):��������
	����ֵ��
	XG_ERR_INVALID_PARAM����������
	XG_ERR_DATA�����ݴ���
	XG_ERR_SUCCESS����֤�ɹ�
	XG_ERR_FAIL����֤ʧ��
	**********************************************************************/
int API_EXPORTED XG_MultiVerify(HANDLE hHandle, UINT32* pUser, UINT32 Num, UINT8* pBuf, UINT32 size, UINT8 Group, UINT16* pQuality);

	/*********************************************************************
	���ܣ����ð�ȫ�ȼ�
	������
	Level(����):��ȫ�ȼ���1-3
	����ֵ��
	XG_ERR_SUCCESS����ʼ���ɹ�
	XG_ERR_FAIL����ʼ��ʧ��
	**********************************************************************/
int API_EXPORTED XG_SetSecurity(HANDLE hHandle, UINT8 Level);

	/*********************************************************************
	���ܣ���ȡ�ѵǼ�����
	������
	User(����):�û���ţ�0����ȡ��ǰ�ڴ�Ǽ����ݣ�1-����û���ţ�ָ���û���ŵǼ�����
	pData(���):��ȡ�Ǽ����ݵ����ݻ�����ָ��
	pSize(���):��ȡ�ĵǼ����ݴ�С
	����ֵ��
	XG_ERR_INVALID_PARAM����������
	XG_ERR_SUCCESS����ȡ�ɹ�
	XG_ERR_FAIL����ȡʧ��
	**********************************************************************/
int API_EXPORTED XG_GetEnrollData (HANDLE hHandle, UINT32 User, UINT8* pData, UINT32* pSize);

	/*********************************************************************
	���ܣ���ȡ�Ǽ�����pData������û�ID
	������
	pData(����):�ⲿ�Ǽ����ݵ����ݻ�����ָ��
	����ֵ��
	< 0�����ݴ���
	> 0���û����
	**********************************************************************/
int API_EXPORTED XG_GetEnrollUserId (HANDLE hHandle, UINT8* pData);

	/*********************************************************************
	���ܣ������ڴ棨���ⲿ���Ǽ����ݵ�ʶ��洢�ռ���ڴ�
	������
	User(����):�û���ţ�0������pDataָ���ĵǼ����ݵ��ڴ棬1-����û���ţ�ָ���û���ŵǼ�����
	Group(����):�û�����
	pData(����):�ⲿ�Ǽ����ݵ����ݻ�����ָ�룬ΪNULLʱ��ʾ�����ڲ��Ǽ�����
	Size(����):�ⲿ�Ǽ����ݴ�С
	����ֵ��
	XG_ERR_INVALID_PARAM����������
	XG_ERR_SUCCESS������ɹ�
	XG_ERR_FAIL������ʧ��
	**********************************************************************/
int API_EXPORTED XG_SaveEnrollData (HANDLE hHandle, UINT32 User, UINT8 Group, UINT8* pData, UINT16 Size);

	/*********************************************************************
	���ܣ�ɾ��ָ���û���Ŵ洢�ռ���ڴ�Ǽ�����
	������
	User(����):�û���ţ�1-����û���ţ�ָ���û���ŵǼ�����
	����ֵ��
	XG_ERR_INVALID_PARAM����������
	XG_ERR_SUCCESS������ɹ�
	**********************************************************************/
int API_EXPORTED XG_DelEnrollData (HANDLE hHandle, UINT32 User);

	/*********************************************************************
	���ܣ���ȡ�Ǽ���Ϣ�������Ǽ��û�����ģ�������ѵǼ��û�����ģ����
	������
	pMaxUser(���):ָ��
	pMaxTempNum(���):ָ��
	pEnrollUser(���):ָ��
	pEnrollTempNum(���):ָ��
	����ֵ��
	XG_ERR_SUCCESS���ɹ�
	**********************************************************************/
int API_EXPORTED XG_GetEnrollNum(HANDLE hHandle, UINT32 *pMaxUser, UINT32 *pMaxTempNum, UINT32 *pEnrollUser, UINT32 *pEnrollTempNum);

	/*********************************************************************
	���ܣ���ȡ�գ��޵Ǽǣ����û����
	������
	pEnptyId(���):ָ��
	StartId��EndId���ڴ˷�Χ�ڻ�ȡ�յ��û����
	����ֵ��
	XG_ERR_NO_NULL_ID���Ǽǿռ�����
	XG_ERR_SUCCESS���ɹ�
	**********************************************************************/
int API_EXPORTED XG_GetEnptyID(HANDLE hHandle, UINT32 *pEnptyId, UINT32 StartId, UINT32 EndId);

/*********************************************************************
	���ܣ�1:1��֤
	������
	void* pEnroll:�Ǽ��������ݣ�base64�����ַ��������������
	void* pChara����Ҫ�ȶԵľ����������ݣ�base64�����ַ��������������
	����ֵ��
	�ǿգ���֤�ɹ�����ѧϰ��������Ǽ�����
	null����֤ʧ��
	**********************************************************************/
UINT8* XGV_CharaVerify(HANDLE hHandle, UINT8* pEnroll, int EnrollSize, UINT8* pChara, int CharaSize);

//��ȡ��ѧϰ���ģ������
int XGV_GetCharaVerifyLearn(HANDLE hHandle, UINT8 *pBuf);

/*********************************************************************
	���ܣ���ȡָ���û���ŵĵǼ�ģ����
	������
	User:�û�ID
	pTempNum�����ģ����
	����ֵ��
	XG_ERR_SUCCESS���ɹ�
	**********************************************************************/
int API_EXPORTED XG_GetUserTempNum(HANDLE hHandle, UINT32 User, UINT32 *pTempNum);

int API_EXPORTED	XG_DecodeEnrollData(UINT8 *pSrc, UINT8 *pDest);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�豸��������
int API_EXPORTED	XG_GetComApiVer(char *pVer);

int API_EXPORTED XG_DetectUsbDev();
/*********************************************************************
���ܣ����豸��������豸�ɹ�ͬʱ����XG_CMD_CONNECTIONָ��
������
Port(����):�˿ںţ�0[USB�˿�]��1-10[COM1-COM10]
Baud(����):������, 0-4[9600,19200,38400,57600,115200]
Addr(����):��Port = 0���˲�������ѡ����USB�豸��CDROM�������ȣ���Port>0�˲���Ϊ�豸��ַ
Password(����/���):����ʱΪ�������룬���ӳɹ�������豸��
Len(����):���볤��>=8
����ֵ��
XG_ERR_SUCCESS:���ӳɹ�
XG_ERR_FAIL:����ʧ��
**********************************************************************/
int XG_OpenVeinDev(char* pDev, int Baud, int Addr, UINT8 Password[16], int Len, PHANDLE pHandle);

/*********************************************************************
���ܣ�����XG_CMD_CLOSE_CONNECTIONָ��ɹ���ر��豸
������
Addr(����):�豸��ַ,0[�㲥�������豸������]��1-255[ָ�������豸��ַ]
����ֵ��
XG_ERR_SUCCESS:�رճɹ�
XG_ERR_FAIL:�ر�ʧ��
**********************************************************************/
int API_EXPORTED XG_CloseVeinDev(UINT8 Addr, HANDLE Handle);

/*********************************************************************
���ܣ��˿��Ѿ��򿪵�����·���XG_CMD_CONNECTION����ָ��
������
Addr(����):�豸��ַ,����485����ʱ�����豸ѡ��
Password(����/���):����ʱΪ�������룬���ӳɹ�������豸��
Len(����):���볤��>=8
����ֵ��
XG_ERR_SUCCESS:���ӳɹ�
XG_ERR_FAIL:����ʧ��
**********************************************************************/
int API_EXPORTED  XG_Connect(UINT8 Addr, UINT8* Password, UINT8 Len, HANDLE Handle);

/*********************************************************************
���ܣ�����XG_CMD_CLOSE_CONNECTION�Ͽ�����ָ��
������
Addr(����):�豸��ַ,����485����ʱ�����豸ѡ��
����ֵ��
XG_ERR_SUCCESS:�ɹ�
XG_ERR_FAIL:ʧ��
**********************************************************************/
int API_EXPORTED  XG_Disconnect(UINT8 Addr, HANDLE Handle);

/*********************************************************************
���ܣ�����һ��ָ���
������
Addr(����):�豸��ַ,0[�㲥�������豸������]��1-255[ָ�������豸��ַ]
Cmd(����):ָ���
Encode(����):���ݱ����ʽ
Len(����):���ݳ���
pData(����):������
����ֵ��
XG_ERR_SUCCESS:ָ������ͳɹ�
XG_ERR_INVALID_PARAM:�����Ƿ�
XG_ERR_COM:�豸��ͨ�Ŵ���
**********************************************************************/
int API_EXPORTED	XG_SendPacket(UINT8 Addr, UINT8 Cmd, UINT8 Encode, UINT8 Len, UINT8* pData, HANDLE Handle);

/*********************************************************************
���ܣ�����һ��ָ���
������
Addr(����):�豸��ַ,0[�㲥�������豸������]��1-255[ָ�������豸��ַ]
pPacket(���):���յ��ķ��ذ�
����ֵ��
XG_ERR_SUCCESS:���ճɹ�
XG_ERR_INVALID_PARAM:�����Ƿ�
XG_ERR_COM:�豸��ͨ�Ŵ���
XG_ERR_DATA:����У�����
**********************************************************************/
int API_EXPORTED	XG_RecvPacket(UINT8 Addr, UINT8* pData, HANDLE Handle);

/*********************************************************************
���ܣ����豸��ȡ����
������
Addr(����):�豸��ַ,0[�㲥�������豸������]��1-255[ָ�������豸��ַ]
Cmd(����):ָ���
pData(���):���ڶ�ȡ���ݵĻ�����
size(����):��ȡ���ݵĴ�С(�ֽ�)
����ֵ��
XG_ERR_SUCCESS:���ݶ�ȡ�ɹ�
XG_ERR_INVALID_PARAM:�����Ƿ�
XG_ERR_COM:�豸��ͨ�Ŵ���
XG_ERR_DATA:����У�����
XG_ERR_FAIL:��ȡ����ʧ��
**********************************************************************/
int API_EXPORTED	XG_ReadData(UINT8 Addr, UINT8 Cmd, UINT8* pData, UINT32 size, HANDLE Handle);

/*********************************************************************
���ܣ�д�����ݵ��豸
������
Addr(����):�豸��ַ,0[�㲥�������豸������]��1-255[ָ�������豸��ַ]
Cmd(����):ָ���
pData(����):��Ҫд�������
size(����):д�����ݵĴ�С(�ֽ�)
����ֵ��
XG_ERR_SUCCESS:����д��ɹ�
XG_ERR_INVALID_PARAM:�����Ƿ�
XG_ERR_COM:�豸��ͨ�Ŵ���
XG_ERR_DATA:����У�����
XG_ERR_FAIL:д������ʧ��
**********************************************************************/
int API_EXPORTED	XG_WriteData(UINT8 Addr, UINT8 Cmd, UINT8* pData, UINT32 size, HANDLE Handle);

int API_EXPORTED	XG_ReadDevEnrollData(int iAddr, UINT32 User, UINT8 *pBuf, UINT32 *pSize, HANDLE Handle);
int API_EXPORTED	XG_WriteDevEnrollData(int iAddr, UINT32 User, UINT8 *pBuf, HANDLE Handle);
int API_EXPORTED	XG_ReadDevFlashData(int iAddr, UINT8 *pBuf, int offset, int size, HANDLE Handle);
int API_EXPORTED	XG_WriteDevFlashData(int iAddr, UINT8 *pBuf, int offset, int size, HANDLE Handle);

int API_EXPORTED	XG_Upgrade(int iAddr, const char* fname, HANDLE Handle);

int API_EXPORTED	XG_GetFingerStatus(int iAddr, HANDLE Handle);
int API_EXPORTED	XG_GetVeinChara(int iAddr, UINT8* pBuf, UINT32 *pSize, HANDLE Handle);

int XGV_VeinBmpMatch(char* fname1, char* fname2, int width, int height, int th);

#if	defined(__cplusplus)
}
#endif	/* defined(__cplusplus) */

#endif
