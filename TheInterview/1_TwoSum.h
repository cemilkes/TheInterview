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
   
        unordered_map<int, int> pair;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int currentSum = target - nums[i];
            if(pair.find(currentSum) != pair.end()){
                result.push_back(i);
                result.push_back(pair[currentSum]);
            }else{
                pair[nums[i]] = i;
            }
        }
        return result;
    }

#endif /* __TwoSum_h */

/*
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
 */

// MARK: - #MAIN
/*
 vector<int> v = {1,5,7,3,2};
 int target = 10;
 
 vector<int> result = twoSum(v, target);
 for(auto x : result){
     cout << x << " ";
 }
 */

// MARK: - PAIR WITH TARGET SUM - SORTED ARRAY
/*
 class PairWithTargetSum {
  public:
   static pair<int, int> searchPair(const vector<int>& arr, int targetSum) {
     // TODO: Write your code here
     int left = 0;
     int right = arr.size() - 1;
     while(left < right){
       int currentSum = arr[left] + arr[right];
       if(currentSum > targetSum){
         right--;
       }else if(currentSum < targetSum){
         left++;
       }else{
         return make_pair(left, right);
       }
     }
     return make_pair(-1, -1);
   }
 };
 */

// MARK: - MAIN
//auto result = searchPair(vector<int>{1,2,3,4,5,6}, 6);
//cout << result;
