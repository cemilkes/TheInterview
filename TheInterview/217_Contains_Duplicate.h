//
//  217_Contains_Duplicate.h
//  TheInterview
//
//  Created by Mr Kes on 7/1/21.
//

#ifndef _17_Contains_Duplicate_h
#define _17_Contains_Duplicate_h
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> charactersOfMap;
    int c;
    for (int i = 0; i < nums.size(); i++) {
        c = nums[i];
        if (charactersOfMap.find(c) != charactersOfMap.end()) {
            charactersOfMap[c]++;
            return false;
        }else{
            charactersOfMap[c] = 1;
        }
    }
    return true;
}

#endif /* _17_Contains_Duplicate_h */

// MARK: - #Using Set
/*
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> charactersOfSet;
    int c;
    for (int i = 0; i < nums.size(); i++) {
        c = nums[i];
        
        if (charactersOfSet.find(c) != charactersOfSet.end()) {
            return true;
        }else{
            charactersOfSet.insert(c);
        }
    }
    return false;
}
*/
