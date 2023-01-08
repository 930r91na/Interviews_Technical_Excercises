/*
x = 0  1
[1,2,3,1]
[1,1,2,3]
     ^

*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> set;
        unordered_set <int> :: iterator it;
        pair <unordered_set <int> :: iterator ,bool> ret;


        for (int i = 0; i < (int)nums.size(); i++){
            ret = set.insert(nums[i]);
            if (ret.second == false){
                return true;
            }
        }

        return false;

    }    
};
