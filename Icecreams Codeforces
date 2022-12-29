#include <iostream>
#define ll long long
using namespace std;

int main (){
	ll  x, temp;
	int n;
	char addorsub;
	ll icecreams=0;
	int distress=0;
	
	cin>>n>>x;
	
	icecreams=x;
	
	/*
	icecream=7/12/2/42/22
	i=0,1,2,3,4, 5
	temp=5/10/20/40 /20
	addorsub + - - + -
	distress 1
	*/
	for (int i=0 ; i<n ; i++){
		cin>>addorsub;
		
		if (addorsub == '+'){
			cin>>temp;
			icecreams += temp;		
		}else{
			cin>>temp;
			
			if (icecreams >= temp){
				icecreams -= temp;
			}else{
				distress++;
			}
		}
	}
	
	cout<<icecreams<<" "<<distress<<endl;
}
