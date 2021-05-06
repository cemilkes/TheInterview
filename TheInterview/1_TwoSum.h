//
//  1_TwoSum.h
//  TheInterview
//
//  Created by Mr Kes on 4/13/21.
//

#ifndef __TwoSum_h
#define __TwoSum_h
#include "Libraries.h"
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    
    vector<int> result;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(target - nums[i] == nums[j]){
                result.push_back(i);
                result.push_back(j);
            }
        }
    }
    return result;
}

#endif /* __TwoSum_h */
