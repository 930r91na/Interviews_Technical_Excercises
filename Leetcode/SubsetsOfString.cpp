/*

Print all subsets of a given Set or Array
Input: array = {1, 2, 3}

Output: // this space denotes null element. without repetition
         1
         1 2
         1 2 3
		 1 3
         2
         2 3
         3
         
First approach
array = {1, 2, 3}
qu


*/

/*
void binaryCounter (int current,int n){
	unsigned short val = current;
	bitset<6> bitset{current};
	//vector <int> combinations (0,n);//initialize in 0 with n bits
	
	cout << bitset <<endl; 
}
vector<vector<int>> findSubsets (vector <int> &set) {
	int  n = set.size();
	vector <int> combinations (0,n);
	
	

}
int main(){
	//binaryCounter (5,5);
		//binaryCounter (4,5);

	for (int i = 0 ; i < 10 ; i++){
		binaryCounter (i, 5);
	}
}*/
/*
// Function that convert Decimal to binary
int decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}
 
// driver code
int main()
{
    int n = 32;
    decToBinary(n);
}

Find all the subsets of a string
S = abc
*/

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;
// Function that convert Decimal to binary
vector <int> decToBinary(int c, int size)
{
  vector <int> ans;
  // Size of an integer is given by the size of string
  for (int i = size; i >= 0; i--) {
      int k = c >> i;
        if (k & 1)
        ans.push_back(1);
        else
        ans.push_back(0);
  }
  return ans;
}

vector <string> subSets (string &set){
  vector <string> ans;
  string temp = "";
  vector<int> counter; // creates all the combinations

  for (int i=1 ; i < pow (2,(int)set.size()); i++){//from 1 to 2^n
    //cout<<i<<endl;

    counter = decToBinary(i,set.size() - 1);//001
    
    /*for (auto i : counter){
          cout<<i;
    }
    cout<<endl;*/
    
    for (int j = 0 ; j < counter.size() ; j++){
      if (counter[j] == 1){
        temp += set[j];
      }
    }

    //push temp and itinilize
    ans.push_back(temp);
    temp = "";
  }
  
  return ans;
}

// driver code
int main()
{
  string input = "abcdef";
  vector <string> output;
  
  output = subSets(input);
  
  for (auto i: output){
    cout << i << endl;  
  }
}
