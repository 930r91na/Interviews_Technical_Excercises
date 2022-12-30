class Solution {
public:
    string commonBetween2Strs(string &str,string &str2){
        string common="";
        for (int i=0 ; i<max(str.size(),str2.size()) ; i++){
            if (str[i] == str2[i]){
                common += str[i];
            }else{
                break;
            }
        }
        return common;
    }


    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for (int i=1 ; i<strs.size(); i++){
            prefix=commonBetween2Strs(prefix,strs[i]);
        }

        return prefix;
    }
};
