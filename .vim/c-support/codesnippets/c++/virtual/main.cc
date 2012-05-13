/*
 * =====================================================================================
 *
 *       Filename:  reg2.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/27/2011 09:21:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kangle.wang (mn), wangkangluo1@gmail.com
 *        Company:  APE-TECH
 *
 * =====================================================================================
 */


#include	<cstdlib>
#include	<fstream>
#include	<iomanip>   
#include	<iostream>  

using namespace std;

class A
{ 
//    protected:
        int a;
    private:
        char *m_data;
    public:
        A(){ a = 10; m_data = new char[10]; cout<<"A::A()\n"<<endl;};
        virtual void test(){cout<<"A::test()\n"<<endl;};
        virtual ~A(){delete m_data; cout<<"A::~A()\n"<<endl;};
      
};




class B: public A
{
    private:
        char *m_data;
   public:
       B(){ m_data = new char[10]; cout<<"B::B()\n"<<endl;};
       ~B(){delete m_data; cout<<"B::~B()\n"<<a<<endl;};
      virtual  void test(){cout<<"B::test()\n"<<endl;};
};


	int
main ( int argc, char *argv[] )
{
    A *a = new B; 
    //B *b = new B;
    delete a;
    //a.test();

	return EXIT_SUCCESS;
}		// ----------  end of function main  ---------- 

