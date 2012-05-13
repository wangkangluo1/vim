/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/23/2012 05:49:22 PM
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

#include	<assert.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
void test(char *str)
{
    assert(str !=NULL);
    printf("asf");
}
	int
main ( int argc, char *argv[] )
{
    char *me = NULL;
    test(me);
	printf ("\nProgram %s\n\n", argv[0] );

	return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */

