/*
 * =====================================================================================
 *
 *       Filename:  fprintf.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/04/2012 10:08:05 PM
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
    stream = fopen("./test.db", "w+"); 
    fseek(stream, 0, 5); 
    fprintf(stream, "%s", "hello world");
    fclose(stream);
    return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */

