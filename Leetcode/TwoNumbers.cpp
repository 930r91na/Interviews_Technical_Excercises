/*
Output yes or no ? the pointers
more solutions or there's no 

[2 5 11 15] target=9
   ^^
    pointers == stop
    if plow+phigh>traget
        phigh--
    else 
        plow ++
    O(n)

[2 5 11 15] traget 7  9
 ^ ^
 low=0
 high=4 3 2

 [3,2,4] target 6
  ^   ^
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <pair <int , int>> origposit;
        vector <int> positions (2,0);
        int low = 0;
        int high = (int)nums.size()-1;

        for (int i = 0 ; i < (int) nums.size() ; i++) {
            origposit.push_back(make_pair(nums[i],i));
        }

        sort (origposit.begin(),origposit.end());


        while (low < high && origposit[low].first + origposit[high].first != target) {
            origposit[low].first + origposit[high].first > target ? high-- : low++;
        }

        positions[0]=origposit[low].second;
        positions[1]=origposit[high].second;
        
        return positions;
    }
};
