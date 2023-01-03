/*
Find longest substring no repeating
""
=1 or 0


long 3
"pwwkew"
      ^
      ^
8-4
"abdbcdebs"
    ^
 ^

"bbbbb"
    ^
    ^
size substr=low-upp +1;
O(n)
is was seen previously?
    no up++ 
    
    yes low = position of repeated character + 1
    and we save and compare the long 

stop upp is in last character
O(1) constant

*/

/*
long=0
size=6
"pwekew"
    ^
 ^
*/

class Solution {
public:
    int seenprev (string &s, int low, int high){
        for (int i=low; i < high ;i++){
            if (s[high] == s[i]){
                return i;
            }
        }
        return -1;
    }


    int lengthOfLongestSubstring(string s) {
        int low=0, high=0,longest=0;

        while (high < s.size()){
            if (seenprev(s,low,high) == -1){
                high++;
            }else{
                longest = max(longest,(high-low));
                low = seenprev(s,low,high) + 1;//the next one to the repetition
            }
        }

        longest = max(longest,(high-low));
        return longest;
    }
};
