#include <iostream>
using namespace std;

/*
The minimum of stones
-Count each space between the differences
 O(n) Traverse the strign and check 
 
 ans=MAX=49
 RRRBGRRRBBRRGR
      ^
 aux=R B
 if (aux==str[i])  **i starts at 1
 	count++
 else
 	aux=str[i]
	if(count<ans){
	ans=count
	}
	count=0
 	
-Check the minimun

	RBBR
	 ^
	COUNT 50
	AUX=R/B  
*/
const int MAX = 50;
int sol(int &n, string &str){
	int ans = MAX;
	int count = 0;
	char aux = str[0];
	
	for(int i = 1 ; i < str.size() ; i++)
	{
		if(aux == str[i])
		{
		 	count++;
			ans++;	
		}else{
			aux = str[i];
			
			if (count < ans){
				ans = count;
			}
			//count=0;
		}
		 	
	}
	if(ans>=50){
		ans=count;
	}
	
	return ans; 
}

int main(){
	int n;
	cin>>n;
	
	string str;
	cin>>str;
	
	cout<<sol(n,str);
}
