/*
nums[1 3 1 2 7] and k 5
     ^    ^
     0i    2j
abs(i-j) <= k
0-2 2 <= 5 ttrue  
is true

Contains duplicate wich are at a maximum distance k?

First approach O(nlogn) O(n*m)
->Sort and traverse the sorted array to check the following ones 0(nlogn) 
-> store map value index sort and then check conditions of near

Second 
O(n^2)
Compare k to the right and k to the left

Third
key not sort 
time O(n)
space O(n)
[1 7 3 4 3 3]
 ^

 unordered map
 value  position
 1 0
 7 1
 3 3 <-5 5-3 abs rfeturn true if its far way 3 5
 4 3


nums = [1,2,3,1,2,3], k = 2
                ^
false

Map
1 3  0-3 3 
2 1
3 2
*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        bool isDuplicate = false;
        unordered_map <int,int> repetitions;

        for (int i = 0; i < (int)nums.size(); i++){
            if(repetitions.count(nums[i]) == 0){
                //cout<<"generate "<<nums[i]<<endl;
                repetitions[nums[i]] = i;
            }else{
                //cout << abs(repetitions[nums[i]] - i);
                abs(repetitions[nums[i]] - i) <= k ? isDuplicate = true : repetitions[nums[i]] = i;
            }
        }

        return isDuplicate;
    }
};
