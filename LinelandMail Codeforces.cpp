/*
FOR THE MIN IT HAS TO GO WITH THE LATERALS AND FOR THE MAX WITH BOTH EXTREMES
*/
#include <vector>
#include <utility>
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
	int nciudades;
	vector<int> ubicacion;
	
	//input of data
	cin>>nciudades;
	
	for (int i=0; i<nciudades ; i++){
		int x;
		cin>>x;
		ubicacion.push_back(x);
		
	}
	
	//process
	//It has to be garateed that the positions are in ascending order
	cout<<abs(ubicacion[0]-ubicacion[1])<<" "<<abs(ubicacion[0]-ubicacion[nciudades-1])<<endl;//for the case of the first city
	
	for (int i=1; i<nciudades-1 ; i++){
		int op1max,op2max,op1min,op2min;
		op1min=abs(ubicacion[i]-ubicacion[i+1]);
		op2min=abs(ubicacion[i]-ubicacion[i-1]);
		op1max=abs(ubicacion[i]-ubicacion[0]);
		op2max=abs(ubicacion[i]-ubicacion[nciudades-1]);
		cout<<min(op1min,op2min)<<" "<<max(op1max,op2max)<<endl;
	}
	
	cout<<abs(ubicacion[nciudades-1]-ubicacion[nciudades-2])<<" "<<abs(ubicacion[nciudades-1]-ubicacion[0])<<endl;//for the case of the last city

}
