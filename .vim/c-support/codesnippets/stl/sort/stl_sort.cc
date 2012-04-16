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
#include <vector>

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
#define STR_LENS 1000000

using namespace std;

    int
main ( int argc, char *argv[] )
{
    vector<long> vec_list;
    FILE *stream;

    stream = fopen("test.db", "r");
    long long  i;
    for(i = 0; i < STR_LENS; i++)
    {
        long ss;
        fscanf(stream, "%ld", &ss);
        vec_list.push_back(ss);
    }

    fclose(stream);

    struct timeval tv1, tv2;
    double sec = 0;
    gettimeofday(&tv1, 0);
   //sort 
    sort(vec_list.begin(), vec_list.end(), less<long>());
    gettimeofday(&tv2, 0);
    sec = (double)(tv2.tv_sec - tv1.tv_sec) +  (double)(tv2.tv_usec - tv1.tv_usec) / 1000000;
    printf("time1: %f\n", sec);
    cout<<vec_list[100]<<endl;
    return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */

