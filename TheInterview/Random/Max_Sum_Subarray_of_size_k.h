//
//  Max_Sum_Subarray_of_size_k.h
//  TheInterview
//
//  Created by Mr Kes on 7/5/21.
//

#ifndef Max_Sum_Subarray_of_size_k_h
#define Max_Sum_Subarray_of_size_k_h

/*
 consider each subarray as a Sliding Window of size ‘k.’ To calculate the sum of the next subarray, we need to slide the window ahead by one element. So to slide the window forward and calculate the sum of the new position of the sliding window, we need to do two things:

 Subtract the element going out of the sliding window, i.e., subtract the first element of the window.
 Add the new element getting included in the sliding window, i.e., the element coming right after the end of the window.
 */

static int findMaxSumSubArray(int k, const vector<int>& arr) {
    int maxSum = 0;
    int windowSum = 0;
    int windowStart = 0;

    for(int windowEnd = 0; windowEnd < arr.size(); windowEnd++){
      windowSum += arr[windowEnd];

      if(windowEnd >= k-1){
        // Do what question asks
        maxSum = max(maxSum, windowSum);
        windowSum -= arr[windowStart];
        windowStart++;
      }
    }
    return maxSum;
  }

#endif /* Max_Sum_Subarray_of_size_k_h */


//A basic brute force solution will be to calculate the sum of all ‘k’ sized subarrays of the given array to find the subarray with the highest sum. We can start from every index of the given array and add the next ‘k’ elements to find the subarray’s sum.
// MARK: - Brute Force
/*
 static int findMaxSumSubArray(int k, const vector<int>& arr) {
     int maxSum = 0, windowSum;
     for (int i = 0; i <= arr.size() - k; i++) {
       windowSum = 0;
       for (int j = i; j < i + k; j++) {
         windowSum += arr[j];
       }
       maxSum = max(maxSum, windowSum);
     }

     return maxSum;
   }
 */
// MARK: - MAIN
/*
 cout << "Maximum sum of a subarray of size K: "
        << findMaxSumSubArray(3, vector<int>{2, 1, 5, 1, 3, 2}) << endl;
   cout << "Maximum sum of a subarray of size K: "
        << findMaxSumSubArray(2, vector<int>{2, 3, 4, 1, 5}) << endl;
 */
