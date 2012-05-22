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
    char a[10] = {0}, b[10] = {0};
    int i;
    FILE *fp;
    fp=fopen("test.db","rw+");
    if(fp == NULL)
        exit(1);
    fscanf(fp, "%s %s", a, b);
    printf("%s\n%s\n", a, b);
    fclose(fp);
	return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */

