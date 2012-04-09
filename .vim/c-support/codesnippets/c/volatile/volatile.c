/*
 * =====================================================================================
 *
 *       Filename:  volatile.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2012 10:48:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kangle.wang (mn), wangkangluo1@gmail.com
 *        Company:  APE-TECH
 *
 * =====================================================================================
 */


#include	<errno.h>
#include	<math.h>  
#include	<stdio.h> 
#include	<stdlib.h>
#include	<string.h>
#include<setjmp.h>

static jmp_buf buf;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
#include<sys/time.h>
#include<unistd.h>

void test()
{
    struct timeval tv;
    struct timezone tz;
    gettimeofday (&tv , &tz);
    printf("tv_sec; %d\n", tv.tv_sec) ;
    printf("tv_usec; %d\n",tv.tv_usec);
    printf("tz_minuteswest; %d\n", tz.tz_minuteswest);
    printf("tz_dsttime, %d\n",tz.tz_dsttime);
}

main(){
    struct timeval tv;
    struct timezone tz;
    test();
    gettimeofday (&tv , &tz);
    printf("tv_sec; %d\n", tv.tv_sec) ;
    printf("tv_usec; %d\n",tv.tv_usec);
    printf("tz_minuteswest; %d\n", tz.tz_minuteswest);
    printf("tz_dsttime, %d\n",tz.tz_dsttime);
}
