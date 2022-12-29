#include <iostream>

using namespace std;

int main(){
	int n,k;
	int i=0;
	int flag=0;
	string password="";
	
	cin>>n>>k;
	/*
	5 2 
	flag=01 
	pass=BC
	i=010
	*/
	while (flag<n) {
		i++;
		password += char(96+i);
		
		if (i>=k){
			i=0;
		}
		flag++;
	}
	cout<<password<<endl;
}
