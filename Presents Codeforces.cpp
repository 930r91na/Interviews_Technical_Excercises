/*
We have to sort the values and print its position when it is sorted
*/
#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
 	int n,aux;
 	cin>>n;
	vector<pair <int,int>> data;
 	
 	for (int i=0; i<n; i++){
 		cin>>aux;
 		data.push_back(make_pair(aux,i+1));
	 }
	 
	sort(data.begin(),data.end());
	 
 	for (auto i:data){
 		cout<<i.second<<" ";	
	 }
	 cout<<endl;
}
