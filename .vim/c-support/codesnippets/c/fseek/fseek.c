/*
 * =====================================================================================
 *
 *       Filename:  fseek.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/04/2012 10:35:39 PM
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    FILE *stream;
    stream = fopen("test.db", "rw+");
    long curpos, length;

    curpos = ftell(stream);
    fseek(stream, 0L, SEEK_END);
    length = ftell(stream);
    //fseek(stream, curpos, SEEK_SET);
    fclose(stream);
    printf("%ld\n", length);
    return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */



