
#include <iostream>
#include <stack>          // std::stack
using namespace std;
 
 
int main(){
	/*USING A STACK*/
	int n;
	stack<int> istack;
	cin>>n;
	int x,counter=0;
	int untreated=0;
	
	for(int i = 0 ; i < n ; i++){
		cin >> x;
		if(x == -1){
			if(istack.empty() == false){
				istack.pop();
			}else{
				untreated++;
			}
			
		}else{
			if( x <= 10 ){
				for(int i = 0 ; i < x; i++)
					istack.push(1);
			}
		}
	}
	
	cout<<untreated<<endl;
}
