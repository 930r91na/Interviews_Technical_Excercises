/*
4 5
6-5=1+1 2/6

5 6
2/6=1/3

6 6 
6-6=1 /6

1 1 6-1=

5/6
5
4/6
2/3
2/6
*/
#include <iostream>
#include <math.h>

using namespace std;

void prob(int &Y, int &W){
	
	int num=(6-max(Y,W))+1;//the numerator was get
	int den=6;
	//cout<<num<<endl;
	//Simplify
	for(int i=2;i<5;i++){
		if (num%i==0){
			num=num/i;
			den=den/i;
		}
	}
	if(num != 6){
	cout<<num<<"/"<<den<<endl;
	}else{
		cout<<1<<"/"<<1<<endl;	
	}
}

int main(){
	int Y,W;
	cin>>Y;
	cin>>W;
	
	prob(Y,W);
}
