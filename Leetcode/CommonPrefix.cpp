class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string prefix="";
    bool flag= true;
    int io;
    int j=0;
    while(flag){
        bool temp=true;
        for ( int i=0 ; i<strs.size()-1 ; i++){
            io=i;
            if (i < strs[i].size() && i < strs[i+1].size()){
                if (strs[i][j] != strs[i+1][j]){
                    temp=false;
                }
            }else{
                flag=false;
            }
        }
        
        if (temp==true){
            prefix+=strs[io][j]; 
        }else{
            flag=false;
        }
        j++;

    }
    return prefix;  
    }
};
