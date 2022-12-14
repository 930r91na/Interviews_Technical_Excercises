/**
 * @file CrypthArim.cpp
 * @author 930r91na
 * @brief USE OF LIBRARY HASHMAP
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

const int NWORDS=3;
 
bool solution(vector<string> crypt, vector<vector<char>> solution) {
    bool ans;
    
    map<char,char> alphabet;
    for(int itrow=0;itrow<solution.size();itrow++){
        for(int itrcol=0 ; itrcol<solution[itrcol].size()-1 ; itrcol++){
            //cout<<solution[itrow][itrcol]<<"  "<<solution[itrow][itrcol+1]<<endl;
            alphabet.insert({solution[itrow][itrcol],solution[itrow][itrcol+1]});            
        }
    }
    
    string swordval[NWORDS]={""}; 
    int  iwordval[NWORDS]={0};
    bool ivalwor1[NWORDS]={1};
    
    //scan and assign to crypt 
    for(int itrword=0 ; itrword<NWORDS ; itrword++){
        for(int i=0 ; i<crypt[itrword].size() ; i++){
                if(i==0 && alphabet[crypt[itrword][i]]=='0' && crypt[itrword].size()>1){
                    ivalwor1[itrword]=false;
                }
                swordval[itrword]+= alphabet[crypt[itrword][i]];
                //cout<<" "<<alphabet[crypt[itrword][i]]<< "es"<< int(alphabet[crypt[itrword][i]])-48<<endl;         
        }
        cout<<swordval[itrword]<<endl;
        cout<<"*"<<stoi(swordval[itrword])<<endl;
        iwordval[itrword] = stoi(swordval[itrword]);
    }
    
    if(iwordval[0]+iwordval[1]==iwordval[2]){
        if(ivalwor1[0]==false && ivalwor1[1]==false ){
            ans = false;
        }else{
            ans = true;            
        }
    }else {
        ans = false;
    }
    
    return ans;
}
