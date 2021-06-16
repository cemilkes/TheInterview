//
//  136_Single_Number.h
//  TheInterview
//
//  Created by Mr Kes on 6/16/21.
//

#ifndef _136_Single_Number_h
#define _136_Single_Number_h
int singleNumber(vector<int>& nums) {
    int singleNumber = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        singleNumber ^= nums[i];
    }
    
    return singleNumber;
}

#endif /* _136_Single_Number_h */
