/**
 * @file ReverseString.cpp
 * @author 930r91na
 * @brief 
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <algorithm>
using namespace std;
typedef int unit;

int main()
{
    string str="";
    
    for(unit start=0,end=str.size()-1 ;start<end;start++,end--)
    {
        swap(str[start],str[end]);
    }
    
    cout<<str<<endl;
    
    return 0;
}

