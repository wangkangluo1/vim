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

void sorts(int *a, int lens)
{
    int lens_now = lens;
    while(lens_now-- != 0)
    {
        int i = 0;
        for(i = 0; i < lens_now; i++)
        {
            if(a[i + 1] < a[i])
            {
                int change = a[i + 1];
                a[i + 1] = a[i];
                a[i] = change;
            }
        }
        
        sorts(a, lens_now);
    }
}
	int
main ( int argc, char *argv[] )
{
    int a[] = {1, 5, 4, 6, 7};
    sorts(a, 5);

	return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */

