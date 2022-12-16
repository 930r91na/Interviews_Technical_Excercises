/**
 * @file 
 * @author 930r91na
 * @brief 
 * count unique values of letters in a string
 * @version 0.1
 * @date 2022-12-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
using namespace std;
int const ABC=62;
bool boyorgirl(string &str){
    int val=0;
    int arr[ABC]={0};
    //all are lower case of the latin alphabet
    //a=>61
    //O(n) time
    //O(26) space => O(1) space

    for(int i=0;i<str.size();i++){
        arr[str[i]-61]++;
    }

    for(int i=0;i<62;i++){
        if(arr[i]>0){
            val++;
        }
    }
    
    if(val%2==0){
        return true;
    }else{
        return false;
    }
}

int main(){
    string str;
    cin>>str;
    bool val=boyorgirl(str);

    if(val==false){
        cout<<"IGNORE HIM!"<<endl;
    }else{
        cout<<"CHAT WITH HER"<<endl;
    }
}
