/*
 * =====================================================================================
 *
 *       Filename:  signal.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/08/2012 05:55:09 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kangle.wang (mn), wangkangluo1@gmail.com
 *        Company:  APE-TECH
 *
 * =====================================================================================
 */

#include <iostream>
#include <event.h>
#include <stdlib.h>
#include <signal.h>

using namespace std;
struct event g_eve;

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Event Function

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
void func_for_eve1(int x, short int y, void *pargs)
{
cout << "Calling signal 12 caught here" << endl;
}

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// MAIN
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

int main(int argc, char **argv)

{
struct event_base *base ;

base = event_base_new();

event_set(&g_eve, SIGUSR2, EV_SIGNAL | EV_PERSIST , func_for_eve1, &g_eve);
event_base_set(base,&g_eve);
event_add(&g_eve, NULL);


event_base_dispatch(base);
cout << "Not called after dispatch ";
//return 0;
}
