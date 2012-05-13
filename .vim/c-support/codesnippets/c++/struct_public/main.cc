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


struct s_test
{
    int a;
    int b;
    void test()
    {
        b = 100;
        cout<<"fuck"<<endl;
    }
    s_test()
    {
        cout<<"s_test\n"<<endl;
    }
};


class A:  public s_test
{ 
    protected:
         

    private:
        char *m_data;
    public:
        A(){ 
            this->a = 10;
            m_data = new char[10]; 
            cout<<"A::A()\n"<<endl;
        };
            //virtual void test(){cout<<"A::test()\n"<<endl;};
        void no(){cout<<"endl\n"<<endl;};
        virtual ~A(){ 
            this->test();
            cout<<a<<endl; delete[] m_data; cout<<"A::~A()\n"<<endl;};
      
};

struct s_b: public A
{
    private:
        int b;
    public:
    s_b()
    {
        cout<< "struct s_b"<<b<<endl;
    }
};

	int
main ( int argc, char *argv[] )
{
    s_b *a = new s_b; 
    //B *b = new B;
    delete a;
    //a.test();

	return EXIT_SUCCESS;
}		// ----------  end of function main  ---------- 

