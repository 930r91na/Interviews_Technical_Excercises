/**
 * @file 
 * @author 930r91na
 * @brief 
 * @version 0.1
 * @date 2022-12-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//0 lower 1 upper
bool UpperorLower(string &str){
	int low=0, upp=0;
	for(int i=0;i<str.size();i++){
		//cout<<int(str[i])<<endl;
		if(str[i]<97){
			upp++;
		}else{
			low++;
		}
	}
	//cout<<upp<<low<<endl;
	if(upp>low){
		return 1;
	}else{
		return 0;
	}
}

void ToUpper(string &str){
	for(int i=0;i<str.size();i++){
		str[i]=toupper(str[i]);
	}	
}

void ToLower(string &str){
	for(int i=0;i<str.size();i++){
		str[i]=tolower(str[i]);
	}	
}

int main(){
    string str;
    cin>>str;
	
	bool val=UpperorLower(str);
	if(val==1){
		ToUpper(str);
	}else{
		ToLower(str);
	}
	cout<<str;
}
