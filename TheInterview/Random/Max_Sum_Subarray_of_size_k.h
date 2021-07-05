//
//  Max_Sum_Subarray_of_size_k.h
//  TheInterview
//
//  Created by Mr Kes on 7/5/21.
//

#ifndef Max_Sum_Subarray_of_size_k_h
#define Max_Sum_Subarray_of_size_k_h

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
