/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2012 09:43:31 AM
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

    int a[2][3] = 
    {
        {1,3,4},
            {4,5,6}
    };
    int (*p_a)[3] = a;
    if(0)
    {
	printf ("\nProgram %s\n\n", argv[0] );
    }
	return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */

