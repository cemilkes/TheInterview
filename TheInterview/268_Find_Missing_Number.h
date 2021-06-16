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



// MARK: - #Pattern - Sum
/*
 Sum of the numbers from 1 to n x1
 Sum of the numbers in the array x2
 x1 - x2 will give us missing element.
 (possible Overflow issue if n is too large.)
 
 */

// MARK: - #Pattern - XOR
/*
 static int findMissingNumber(vector<int> &arr) {
     int n = arr.size() + 1;
     // x1 represents XOR of all values from 1 to n
     int x1 = 1;
     for (int i = 2; i <= n; i++)
       x1 = x1 ^ i;

     // x2 represents XOR of all values in arr
     int x2 = arr[0];
     for (int i = 1; i < n-1; i++)
       x2 = x2 ^ arr[i];

     // missing number is the xor of x1 and x2
     return x1 ^ x2;
   }
 */

// MARK: - #MAIN
/*
 vector<int> arr = {3, 1, 5, 4, 2};
   CyclicSort::sort(arr);
   for (auto num : arr) {
     cout << num << " ";
   }
   cout << endl;

   arr = vector<int>{2, 6, 4, 3, 1, 5};
   CyclicSort::sort(arr);
   for (auto num : arr) {
     cout << num << " ";
   }
   cout << endl;

   arr = vector<int>{1, 5, 6, 4, 3, 2};
   CyclicSort::sort(arr);
   for (auto num : arr) {
     cout << num << " ";
   }
   cout << endl;
 */
