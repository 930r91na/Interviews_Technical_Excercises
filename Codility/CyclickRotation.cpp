// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
/*
inp
int k ;
int vector<int>

first approach// time o(n*k)= 10,000 o(n^2) space O(1)
k=n%k
process:
-Iterate in a for k times

-void () changes position of every element one to the right 
    for that traverse the vector O(n)


out
return vector<int>
*/
/*
3 8 9 7 6
6 8 9 7 3
6 3 9 7 8
6 3 8 9 7
6 3 8 7 9
6 3 8 9 7
siz= 5
i=0|1|2|3|4

*/
void vectoright(vector<int> &A){
    for(int i=0 ; i < A.size() ; i++){
        swap(A[i],A[A.size()-1]);
    }
}

vector<int> solution(vector<int> &A, int K) {
    K=K%A.size();
    //cout<<K;
    for(int i=0 ; i<K; i++){
        vectoright(A);
    }

    return A;
}
