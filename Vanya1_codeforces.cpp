/**
 * @file pract.cpp
 * @author 930r91na
 * @brief Vanya 1 CODEFORCES
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
    int n, max_h;
    int aux,ans=0;
    cin>>n>>max_h;
    for(int i=0;i<=n;i++){
        cin>>aux;
        if(aux<max_h){
            ans++;
        }else{
            ans+=2;
        }
    }
    cout<<ans;
    
}
