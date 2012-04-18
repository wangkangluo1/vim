/*
 * =====================================================================================
 *
 *       Filename:  regex.cc
 *
 *    Description:  i
 *
 *        Version:  1.0
 *        Created:  04/16/2012 07:32:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kangle.wang (mn), wangkangluo1@gmail.com
 *        Company:  APE-TECH
 *
 * =====================================================================================
 */

#include <iostream>

#include <boost/regex.hpp>

int main( int argc, char* argv[] )
{
    char *buf = "This is boost::regex example";

    boost::regex exampleregex( "\\b(?=ost)" );
    boost::cmatch result;

    if( boost::regex_search( buf, result, exampleregex ) )
    {
        std::cout << result.str() << std::endl;
    }

    return 0;
}
