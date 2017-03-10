
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

#include "dohighdata.h"
//#include "dodata.h"
#include "XG_Protocol.h"





void main()
{

 // pthread_t identifyTid;
    char *dev="usb";
    char *devNo="1";
    //char input[255];
    int ret = 1;
    char *method="enroll";
    char *name="3";
   // printf("000000\n");
    //int t= snprintf(mode, strlen("1")+1, "%s", "1");
    // printf("mode is %s %d \n",mode,t);
     space_vein_init();
     space_veindev_data_get(dev,ret);
     //printf("000000\n");
     getiDevAdr(devNo);
     //printf("000000\n");
    // enroll_Data(method,name);

 	  int i= verify_Data("verify",3);
	printf("vein back:%d\n",i);




     }


