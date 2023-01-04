#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int binarySearch (vector <int> &arr, int search){
	int low= 0, mid;
	int upp= (int)arr.size() - 1;
	
	while (low <= upp){
		 mid = low + (upp-low)/2;
		if (arr[mid] == search){
			return mid;
		}else if (search>arr[mid]){
			
			low = mid + 1;
		}else{
			
			upp= mid - 1;
		}
	}
	
	int ans;
	((search-arr[low]) > (arr[upp]-search)) ?   ans = low : ans = upp; 

	return ans;
}

int main(){
	int n;
	vector <int> arr = {1,2,3,4,5,8,19,35};
					
	cin>>n;
	cout<<arr[binarySearch(arr,n)];
	
}
