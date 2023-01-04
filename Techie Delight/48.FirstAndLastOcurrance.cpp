#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:

	int binarySearch (vector <int> const &arr, int search, char leftOrRight){
		pair<int,int> ans;
		int low = 0;
		int pos = -1;		
		int upp= (int)arr.size() - 1;
		
		while (low <= upp){
			int mid = low + (upp-low)/2;
			if (arr[mid] == search){
				if (leftOrRight == 'l'){
					pos = mid;
					upp = mid - 1;
				}else{
					pos = mid;
					low = mid + 1; 
				}
			}else if (search>arr[mid]){
				low = mid + 1;
			}else{
				
				upp= mid - 1;
			}
		}

		return pos;
	}

	pair<int,int> findPair(vector<int> const &nums, int target)
	{
		//cout<<"aaa"<<endl;
		pair <int,int> ans;
		ans.first = binarySearch(nums,target,'l');
		ans.second = binarySearch(nums,target,'r');
		
		//cout<<"ii"<<ans.first;
		return ans;
	}
};

int main(){
	Solution test;
	
	int n;
	vector <int> vect;
	
	cin>>n;
	
	for (int i=0 ; i < n; i++){
		int x;
		cin >> x;
		
		vect.push_back(x);
	}
	
	int target;
	cin >> target;
	
	cout<<test.findPair(vect , target).first;
	cout<<test.findPair(vect , target).second;

	
}
