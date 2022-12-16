/**
 * @file pract.cpp
 * @author 930r91na
 * @brief  4 CODEFORCES
 * @version 0.1
 * @date 2022-12-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>

/*

*/

using namespace std;

void GravityFlip(int &size, vector<int> &posBlocks){
    sort(posBlocks.begin(),posBlocks.end());
}

int main(){
    int Nblocks, aux;
    cin>>Nblocks;
    vector<int> posBlocks;
    for (int i=0;i<Nblocks;i++){
        cin>>aux;
        posBlocks.push_back(aux);
    }

    GravityFlip(Nblocks,posBlocks);

    for (int i=0;i<Nblocks;i++){
        cout<<posBlocks[i]<<" ";
    }

}
