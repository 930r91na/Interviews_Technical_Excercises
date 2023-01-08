/*
x = 0  1
[1,2,3,1]
[1,1,2,3]
     ^

*/

class Solution {
public:
    inline bool checkDuplicate (int x){
        if (x != 0){
            return true;
        }else{
            return false;
        }
    }
    bool containsDuplicate(vector<int>& nums) {
        int x=0;

        //sort values
        sort(nums.begin(),nums.end());
        
        //Trvaerse array check equals in contiguos positions
        for(int i=0 ;i < nums.size() - 1 ; i++){
            if(nums[i] == nums[i+1]){
            x++;
            }
        }

      //check repetitions  
        return checkDuplicate(x);

    }    
};
