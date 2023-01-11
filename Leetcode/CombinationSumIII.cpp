
/*
Find all valid combinations of k numbers that sum up to n such that the following conditions are true:
only numbers 1 to 9 just is used once

k = 3 n = 7

1 2 3 4 5 6 7
     
1 + 2 + 4

I do need all the combination so it is required to check each one
k = 3 n = 9
1 + 2 + 6 
1 + 3 + 5
1 + 4 + --
2 + 3 + 4
2 + 4 ---
3 + 4 ---
4 + 5 ---


I could find all the combinations n2^n 
if k = 2
000
001
010 <-
011 <- has k 1 then chack for condition of target if it works for it push it to the resultant vector
111


binary number
0001   1 
0010<- 2
0011<- 3
0100<- 2
0101<-
0110<-
0111


give k number summed and n target 
find the sum with numbers from 1 to 9 just one
1 2 3 4 5 6 7 8 9

9*2^9 = 4608 
2^9 <- all combinations <- constant 

All combinations given in binary there's no repetitions
0000000001
0000000010
O ( 4608 ) 
O (1)
Getting all the combinations
000000001 
       ^
        i
123456789
010100100 <- has counter[i] is equal 1 then numberOfOnes++ and aux += counter[i]

If numberOfones  == k and aus == n then i push counter[i] values  

Second approach 
Backtracking ???...

*/
class Solution {
public:
    vector <int> intToBinary (int current){
        vector <int> ans;

        for (int i = 9 - 1; i >= 0; i--){
            int temp = current >> i;

            if (temp & 1){
                ans.push_back(1);
            }else{
                ans.push_back(0);
            }
        }

        return ans;
    }

    //check if this combinations has k values
    bool checkK (int k, vector<int> &combination){
        for (int i = 0; i < combination.size(); i++){
           if (combination[i] == 1){ 
               k--;
           }
        }

        if (k == 0){
            return true;
        }else{
            return false;
        }
    }

    //checks if this combination sums n
    bool checkTarget (int n,const vector<int> &combination){
        int sums = 0;

        for (int i = 0; i < combination.size(); i++){
            if (combination[i] == 1){
                sums += i+1;
            }
        }

        if (sums == n){
            return true;
        }else{
            return false;
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> combinations;
        vector<int> comb;
        vector<int> combBinary;

        for (int i = 1; i < pow(2,9); i++){
            combBinary = intToBinary(i);
            //cout<<i<<endl;
            //checks if combination has the conditions
            if (checkTarget(n,combBinary) && checkK(k,combBinary)){
                
                //checks 1's of answer and create vector
                for (int i = 0; i < (int)combBinary.size(); i++){
                    if (combBinary[i] == 1){
                        comb.push_back(i + 1);
                    }
                }

                //push the ans to the vector of answers
                combinations.push_back(comb);

                //clean comb 
                comb.erase(comb.begin(),comb.end());
            }
        }

        return combinations;
    }
};
