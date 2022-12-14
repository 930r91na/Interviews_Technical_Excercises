/**
 * @file pract.cpp
 * @author 930r91na
 * @brief  3 CODEFORCES
 * @version 0.1
 * @date 2022-12-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int l,a=0,d=0;
    string str;
    cin>>l;
    cin>>str;
    for(int itr=0 ; itr<l ; itr++){
        if(str[itr]=='A'){
            a++;
        }else{
            d++;
        }
    }

    if(a>d){
        cout<<"Anton"<<endl;
    }else if(a==d){
        cout<<"Friendship"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }
}
