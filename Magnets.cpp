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

/*
x xprev
10 10
10 01
01 10
01 01

6
10-0
10-1
10-2
01-3
10-4
10-5

n=6
i=4
x=0=10=10=10=01=10=10
xprev=0=10=10=10=01=10
ans=0=3
*/

int main(){
	int ans=0;
	int n;
	cin>>n;
	int x=0, xprev;
	for(int i=0;i<n;i++){
		xprev=x;
		cin>>x;
		
		if(xprev!=x){
			ans++;
		}
	}
	
	cout<<ans;
}
