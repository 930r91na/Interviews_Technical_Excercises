// you can use includes, for example:
#include <algorithm>
#include <functional>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
/*
Given an array find the minimum difference of the sum of 2 subarrays 

3 1 2 4 3 
1 2 3 3 4 
*It can be of different size the sub arrays
*The best case is the difference is 0 so we search when adding 
sumTape1 = sumTape2 
3 4  = 7
1 2 3 = 6

5 4 1 8 9 15 3
5 8 15  = 28
4 1 9 3 = 17

15 3  8 9 1 5 4

15 1 5 =21
3 8 9 4 =24

1 3 4 5 8 9 15
15 5 3 =23
9 8 4 1 =22 =1

-Sort array (greater to minor)
-Initialization
    Add greater to Tape 1
    Add to Tape 2 util Tape 2 is equal or greater
    Add to Tape 1 until is equal or greater

    End when there's no more to add

    SOl=abs(Tape 2 -Tape1)

Time O(n)
Space O(1)
*/
int solution(vector<int> &A) {
    int sumTape1=A[0],sumTape2=0;
    sort (A.begin(),A.end(),greater<int>());
    for ( int i=1; i<A.size();i++){
        if(sumTape1<sumTape2){
            sumTape1+=i;
        }else{
            sumTape2+=i;
        }
    }

    return abs(sumTape1-sumTape2);
}
