#include <map>
#include <string>
#include <iostream>

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
    map<int,int> mapStudent;
    mapStudent.insert(pair<int,int>(1, 34));
    mapStudent.insert(pair<int,int>(2, 55));
    mapStudent.insert(pair<int,int>(6, 58));

    mapStudent.insert(pair<int,int>(4, 57));

    map<int,int>::iterator  iter;

    /*    for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
          {
          cout<<iter->first<<""<<iter->second<<endl;
          }*/
    iter = mapStudent.find(56);
    cout<<iter->first<<endl;
    iter =  max_element(mapStudent.begin(),mapStudent.end());

    cout<<iter->first<<endl;
    iter =  map_max_element(mapStudent);

    cout<<iter->first<<endl;

}

