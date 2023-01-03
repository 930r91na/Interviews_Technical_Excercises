/*
limit of n
Symbol       Value
I             1<
IV            4
V             5<
IX            9<
X             10<<
XL
L             50<<
XC            90
C             100<
CD
D             500<
CM
M             1000
I will need this reference in a vector of pairs in order

n=574
n=74
n=24
n=14
n=4
DLXXIIII

*/

class Solution {
public:
    void createreference (unordered_map <char,int> &ref){
        ref['I']=1;
        ref['V']=5;
        ref['X']=10;
        ref['L']=50;
        ref['C']=100;
        ref['D']=500;
        ref['M']=1000;
    } 

    int romanToInt(string s) {
        unordered_map <char,int> ref;
        createreference(ref);
        int n=0;

        for (int i=0 ; i < (int)s.size(); i++)
       {
           if (ref[s[i]] >= ref[s[i+1]]){
               n += ref[s[i]];
           }else{
               n += -ref[s[i]]+ref[s[i+1]];
               i++;
           }
       }
        return n;
    }
};
