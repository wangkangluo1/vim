/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/14/2012 05:03:31 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kangle.wang (mn), wangkangluo1@gmail.com
 *        Company:  APE-TECH
 *
 * =====================================================================================
 */
// URL that generated this code:
// http://www.txt2re.com/index-cpcre.php3?s=05:Feb:2012%20%22This%20is%20an%20Example!%22&-2

#include <stdio.h>
#include <string.h>
#include <pcre.h>

int main(int argc, char **argv)
{
  const char *error;
  int erroffset;
  int ovector[186];
  char re[8192]="";
  char txt[]="05:Feb:2012 \"This is an Example!\"";

  char re1[]="(05:Feb:2012)";	// DDMMMYYYY 1
  strcat(re,re1);

  pcre *r =  pcre_compile(re, PCRE_CASELESS|PCRE_DOTALL, &error, &erroffset, NULL);
  int rc = pcre_exec(r, NULL, txt, strlen(txt), 0, 0, ovector, 186);
  if (rc>0)
  {
      char ddmmmyyyy1[1024];
      pcre_copy_substring(txt, ovector, rc,1,ddmmmyyyy1, 1024);
      printf("(%s)",ddmmmyyyy1);
      puts("\n");
  }
}

