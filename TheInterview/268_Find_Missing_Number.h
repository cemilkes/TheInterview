//
//  268_Find_Missing_Number.h
//  TheInterview
//
//  Created by Mr Kes on 6/3/21.
//

#ifndef _68_Find_Missing_Number_h
#define _68_Find_Missing_Number_h

void swap(vector<int> &arr, int i, int j);
int missingNumber(vector<int>& nums) {
    int i = 0;
    while(i < nums.size()){
        if(nums[i] < nums.size() && nums[i] != nums[nums[i]]){
            swap(nums, i, nums[i]);
        }else{
            i++;
        }
    }
    
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != i){
            return i;
        }
    }
    return nums.size();

}

void swap(vector<int> &arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


#endif /* _68_Find_Missing_Number_h */


// MARK: - #Pattern - Cycle Sort
// MARK: - #MAIN

/*
 int main(int argc, char *argv[]) {
   vector<int> arr = {3, 1, 5, 4, 2};
   CyclicSort::sort(arr);
   for (auto num : arr) {
     cout << num << " ";
   }
   cout << endl;
 
 */

/*
 vector<int> v1 = {4, 0, 3, 1};
   cout << findMissingNumber(v1) << endl;
   v1 = {8, 3, 5, 2, 4, 6, 0, 1};
   cout << findMissingNumber(v1) << endl;
 */
