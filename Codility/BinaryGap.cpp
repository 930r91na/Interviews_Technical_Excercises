// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

/*
A binary gap within a positive integer N
- The input is N as an integer value
- The output should be the max number of consecutives 0's in the N transformed in binary

1ST approach
1.Conversion
Time complexity O(ceil (log2 n)-1)
Time space O(digits binary)


BOOL ALGEBRA

n/2 => n
n%2 => added to string array
string binaryN=""
while(n/2 == 0)
    if(n % 2 == 0)
        binaryN+="0";
    else
        binaryN+="1";
    n/2 = n

binaryN+="1" 

Desk Test
n=9,4,2 
binary N = "1001"


int n decimal => nBinary (string "")
n = 9 , nBinary = "1001"
so- 10100 check BOTH ENDS IN 1, 
so- 10, 100 so what happens?? => 0

20= 10100
str = 00101

2.Traverse the string 
Time complexity  O(ceil (log2 n))
binarygap=0,counter=0;

-Check for 1's
    if(counter>binarygap){
        binarygap=counter
    start a counter=0
- Check for 0's
    counter++

""
1041
520
260
130
65
32
16
8
4
2
0

flag false true
counter 0 1 2 3 ,0,1,2,3,4,5
binarygao 0,3

*/
void inttosbinary(int n, int &binarygap){
    //string invNbinary = "";
    bool flag = false;
    int counter=0;
    while (n/2 != 0){
        if ( n%2 == 0){
            //invNbinary += "0";
            if(flag == true){
                counter++;
            }
        }else{
            //invNbinary += "1";
            binarygap = max(binarygap,counter);
            counter = 0;
            flag = true;
        }
        n=n/2;
    }
    binarygap = max(binarygap,counter);
    //invNbinary += "1";
}


int solution(int N) {
    int biinarygap=0;
    inttosbinary(N, biinarygap);

    return biinarygap; 
}
