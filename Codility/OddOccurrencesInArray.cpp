// you can use includes, for example:
 #include <algorithm>
 #include <map>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
/*
ODD NUMBER IF ELEMENTS 
Every element is pared with other that has the same value except for one 
Size=2n+1 ,
A= 9,3,9,3,9,7,9 
Returns the unique value or the unpaired 

-First approach 
Traverse the Array and save the unique values in other vector and if you find them later you delete them from the unique array.
Time complexity= O(n)*O(n/2)* = O (n^2)
*for the worst case in which they are [1 2 3 4 1 2 3 4 5]
Space complexity O(n/2)

-Second approach 
Sort the array and then Traverse the array 
Time complexity O(nlogn)+O(n)
Time space O(1) constant

-Third approach
The values of the array are the position of a second one.
Then the array is traversed to find the one wich value is '1'
Time O (2n) = O (n)
Space O(max value of N) -not efficient

-Fourth approach
Hash Map the value is the key and the frequency is the value
Traverse the HashMap and print the key  who has the value of 1
Time O(n)+ O (n/2 + 1) = O (n)
Space O (n/2 + 1)

-Fifth approach 
Probably I could improve the space 
*/

int solution(vector<int> &A) {
    map <int, int> hash; //this is a pair so iterator.first is the key and second is the   value 
    
    for (unsigned int i=0 ; i<A.size() ; i++){
        hash[A[i]]++;
        if ( hash[A[i]] == 2) {
            hash.erase (A[i]); //deleting by key  idk the time in a hash requires to delete 
        }// I think that with this the space complexity is reduced 
    }

    for (auto s : hash){
        if ( s.second == 1){
            return s.first;
            break;
        }
    }
    return 0;
}
