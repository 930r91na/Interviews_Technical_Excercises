/**
 * @Kadane'sAlgorithm.cpp
 * @author 930r91na
 * @brief 
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

const int MIN=-100000;
int solution(vector<int> inputArray) {
    int maxlocal=inputArray[0];
    int maxsf=MIN;
    for(int i=1;i<inputArray.size();i++){
        if(inputArray[i]>maxlocal+inputArray[i]){
            maxlocal=inputArray[i];
        }else{
            maxlocal=maxlocal+inputArray[i];
        }
        
        if(maxlocal>maxsf){
            maxsf=maxlocal;
        }
    }
    return maxsf;
}
