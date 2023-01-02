/*
Given an integer n, return any array containing n unique integers such that they add up to 0.
input is an int 
limits of n 1<= n <=1000
return an array of unique integers that add up to 0
in order has to be?
there can be cero's that's obvius

n=5
[-1,-2,-3,-4,10]  
any multiple of this 

n=4
[-3,-2,-1,6]

Generate numbers from -n+1 and finally add the value of the sum of n-1

n=4

0 1 2 3 
-1 -2 -3 
*/
class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> ans (n,0);
        for (int i=0; i<n-1 ; i++){
            ans[i]=-i-1;
        }
        ans[n-1]= (n-1)*(n)/2;
        
        return ans;
    }
};
