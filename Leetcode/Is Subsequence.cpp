/*
s=3 t=7;
i=0
j=0

abc
   ^
ahbgdc
     ^

aec
 ^
adbc
^
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
    int i=0,j=0;
    while (i<s.size()){
        if (j<t.size()){
            if(s[i]==t[j]){
                i++;
            }
            j++;

        }else{
            return false;
        }
    }
    return true;
    }
};
