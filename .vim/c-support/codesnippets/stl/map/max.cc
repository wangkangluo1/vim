/*
 * =====================================================================================
 *
 *       Filename:  max.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2012 12:57:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kangle.wang (mn), wangkangluo1@gmail.com
 *        Company:  APE-TECH
 *
 * =====================================================================================
 */

#include <iostream>
#include <map>

#include <algorithm>
using namespace std;

template<class T>
bool pairCompare(const T & x, const T & y)
{
  return x.second < y.second;
}

template<class T>
typename T::const_iterator map_max_element(const T &A)
{
    typedef typename T::value_type pair_type;
    return max_element(A.begin(), A.end(), pairCompare<typename T::value_type>);
}

int main()
{
    map<float, int> A;
    map<float, int>::const_iterator it;
    // Data insert

    A.insert ( pair<float, int>( -2, 1) );
    A.insert ( pair<float, int>( 0, 5) );
    A.insert ( pair<float, int>( 2, -5) );

    it = map_max_element(A);

    cout << "Row with maximum second element of a Map: " << (*it).first << " , " << (*it).second << endl;

    return 0;
}
