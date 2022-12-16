/**
 * @file pract.cpp
 * @author 930r91na
 * @brief  4 CODEFORCES
 * @version 0.1
 * @date 2022-12-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <iostream>


using namespace std;
typedef int coordinate;

int main(){
    int aux;
    coordinate x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>aux;
            if(aux==1){
                x=i;
                y=j;
            }
        }
    }
    //we wish to go to the center (2,2);
    int ans=abs(2-x)+abs(2-y);
    cout<<ans<<endl;
}
