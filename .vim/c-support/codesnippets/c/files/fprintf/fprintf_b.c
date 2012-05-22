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
    stream = fopen("./test.db", "rw+"); 
    fseek(stream, 0, SEEK_SET); 
    fprintf(stream, "btk");
    long lens = ftell(stream);
    fseek(stream, lens - 5, SEEK_SET);
    fprintf(stream, "btk");

    fclose(stream);
    return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */

