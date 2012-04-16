/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2012 03:40:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kangle.wang (mn), wangkangluo1@gmail.com
 *        Company:  APE-TECH
 *
 * =====================================================================================
 */

#include <iostream>
#include <algorithm>
#include <ctime>

extern "C"
{
#include	<errno.h>
#include	<math.h>  
#include	<stdio.h> 
#include	<stdlib.h>
#include	<string.h>

#include        <sys/time.h>
#include        <unistd.h>
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
#define STR_LENS 5000000



int compar(const void *a, const void *b)
{
    long *aa = (long *)a, *bb = (long *)b;
    if( * aa >* bb)return 1;
    if( * aa == * bb) return 0;
    if( * aa < *bb) return -1;
}

    int
main ( int argc, char *argv[] )
{
    FILE *stream;

    struct timeval tv1, tv2;
    double sec = 0;
    gettimeofday(&tv1, 0);
    stream = fopen("../test.db", "r");

    int lens = sizeof(long);
    long *ss = (long *)malloc(STR_LENS*lens);
    memset(ss, 0, STR_LENS*lens);
    long long  i;
    for(i = 0; i < STR_LENS; i++)
    {
        fscanf(stream, "%ld", ss + i);
    }

    fclose(stream);
    qsort(ss, STR_LENS, sizeof(long), compar);

    gettimeofday(&tv2, 0);
    sec = (double)(tv2.tv_sec - tv1.tv_sec) +  (double)(tv2.tv_usec - tv1.tv_usec) / 1000000;
    printf("time1: %f\n", sec);
    return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */

