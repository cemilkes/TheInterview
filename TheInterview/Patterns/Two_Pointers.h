//
//  Two_Pointers.h
//  TheInterview
//
//  Created by Mr Kes on 7/20/21.
//

#ifndef Two_Pointers_h
#define Two_Pointers_h
/*
 **Given an array of sorted numbers and a target sum, find a pair in the array whose sum is equal to the given target.**

 To solve this problem, we can consider each element one by one (pointed out by the first pointer) and iterate through the remaining elements (pointed out by the second pointer) to find a pair with the given sum. The time complexity of this algorithm will be O(N^2) where ‘N’ is the number of elements in the input array.

 Given that the input array is sorted, an efficient way would be to start with one pointer in the beginning and another pointer at the end. At every step, we will see if the numbers pointed by the two pointers add up to the target sum. If they do not, we will do one of two things:

 1. If the sum of the two numbers pointed by the two pointers is greater than the target sum, this means that we need a pair with a smaller sum. So, to try more pairs, we can decrement the end-pointer.
 2. If the sum of the two numbers pointed by the two pointers is smaller than the target sum, this means that we need a pair with a larger sum. So, to try more pairs, we can increment the start-pointer.
 */

// MARK: - #PAIR with traget Sum
/*
 static pair<int, int> search(const vector<int> &arr, int targetSum) {
     int left = 0, right = arr.size() - 1;
     while (left < right) {
       int currentSum = arr[left] + arr[right];
       if (currentSum == targetSum) { // found the pair
         return make_pair(left, right);
       }

       if (targetSum > currentSum)
         left++; // we need a pair with a bigger sum
       else
         right--; // we need a pair with a smaller sum
     }
     return make_pair(-1, -1);
   }
 */

#endif /* Two_Pointers_h */
