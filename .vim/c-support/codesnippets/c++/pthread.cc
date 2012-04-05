/*
 * =====================================================================================
 *
 *       Filename:  pthread.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2012 11:07:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kangle.wang (mn), wangkangluo1@gmail.com
 *        Company:  APE-TECH
 *
 * =====================================================================================
 */


#include	<cstdlib>
#include	<fstream>
#include	<iomanip>   
#include	<iostream>  

using namespace std;

extern "C"
{

#include <stdio.h>  
#include <pthread.h>  
}
void* thread(void *r) 
{  
    int i;  
    for(i=0;i<3;i++)
    { 
       cout << "aaa" <<endl;  
     //   printf("This is a pthread %d.\n",*(int*)r);  
    }
}  

int main(void)  
{  
    pthread_t id1;  
    pthread_t id2;  
    pthread_t id3;  
    pthread_t id4;  
    int i,ret;  
    int one=1;  
    int two=2;  
    int three=3;  
    int four=4;  
    ret=pthread_create(&id1,NULL, thread,NULL); 
   /* 
    ret=pthread_create(&id1,NULL, thread,(void*)&two);  
    ret=pthread_create(&id1,NULL, thread,(void*)&three);  
    ret=pthread_create(&id1,NULL, thread,(void*)&four);  
    */
    if(ret!=0){  
        printf ("Create pthread error!\n");  
        return 1;  
    }  
    for(i=0;i<3;i++)  
        printf("This is the main process.\n");  
    pthread_join(id1,NULL);  
    pthread_join(id2,NULL);  
    pthread_join(id3,NULL);  
    pthread_join(id4,NULL);  
    return 0;  
}  
