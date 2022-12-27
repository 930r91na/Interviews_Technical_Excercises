#include <iostream>
#include <math.h>
/*
117 3
i=1 
117
234
351

*/
using namespace std;

void sol(int k, int &r){
	int i=1,temp=k;
	while (!(temp%10==r||temp%10==0)) {
		//cout<<k%10<<endl;
		i++;
		temp=k*i;
	}
	
	cout<<i<<endl;
}
int main(){
	int k,r;
	cin>>k>>r;
	sol(k,r);
}
