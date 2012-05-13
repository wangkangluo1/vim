/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/08/2012 06:42:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kangle.wang (mn), wangkangluo1@gmail.com
 *        Company:  APE-TECH
 *
 * =====================================================================================
 */

#include <stdio.h>
 #include <unistd.h>
 
 int main (int argc, char **argv)
 {
     int oc;                     /*选项字符 */
     char *b_opt_arg;            /*选项参数字串 */
 
     while((oc = getopt(argc, argv, "ngl:")) != -1)
     {
         switch(oc)
         {
             case 'n':
                 printf("My name is Lyong.\n");
                 break;
             case 'g':
                 printf("Her name is Xxiong.\n");
                 break;
             case 'l':
                 b_opt_arg = optarg;
                 printf("Our love is %s\n", optarg);
                 break;
         }
     }
    return 0;
 }
