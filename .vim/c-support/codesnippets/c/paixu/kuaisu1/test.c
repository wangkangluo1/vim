/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/27/2012 01:50:20 AM
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

void wkl_qsort(int *p_arr, int head, int lens)
{
    while( 1 < lens)
    {
        int before_lens = lens, p_head = head, p_end = head + lens - 1, point = head;
        while(p_head != p_end)
        {
            if(point == p_head)
            {
               if(p_arr[point] > p_arr[p_end])
               {
                  int change = p_arr[p_end];
                  p_arr[p_end] = p_arr[point];
                  p_arr[point] = change;
                  p_head ++;
                  point = p_end;
               }
               else
               {
                   p_end--;
               }
            }
            else if(point == p_end)
            {
               if(p_arr[point] < p_arr[p_head])
               {
                  int change = p_arr[p_head];
                  p_arr[p_head] = p_arr[point];
                  p_arr[point] = change;
                  p_end--;
                  point = p_head;
               }
               else
               {
                   p_head++;
               }
            }
        }
        before_lens = point - head;
        wkl_qsort(p_arr, head, before_lens - 1);
        wkl_qsort(p_arr, head + before_lens + 1, lens - 1 -before_lens);
    }
}
	int
main ( int argc, char *argv[] )
{
    int a[] = {1, 3, 6, 2 ,4};
    wkl_qsort(a, 0, 5);
	printf ("\nProgram %s\n\n", argv[0] );

	return EXIT_SUCCESS;
}		/* ----------  end of function main  ---------- */


