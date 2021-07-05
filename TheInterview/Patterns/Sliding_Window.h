//
//  Sliding_Window.h
//  TheInterview
//
//  Created by Mr Kes on 7/5/21.
//

#ifndef Sliding_Window_h
#define Sliding_Window_h

//First Approach
class AverageOfSubarrayOfSizeK {
 public:
  static vector<double> findAverages(int K, const vector<int>& arr) {
    vector<double> result(arr.size() - K + 1);
    for (int i = 0; i < arr.size() - K; i++) {
      // find sum of next 'K' elements
      double sum = 0;
      for (int j = i; j < i + K; j++) {
        sum += arr[j];
      }
      result[i] = sum / K;  // calculate average
    }

    return result;
  }
};

/*
 *Time complexity: Since for every element of the input array, we are calculating the sum of its next ‘K’ elements, the time complexity of the above algorithm will be O(N*K)O(N∗K) where ‘N’ is the number of elements in the input array.
 Can we find a better solution? Do you see any inefficiency in the above approach?
 The inefficiency is that for any two consecutive subarrays of size ‘5’, the overlapping part (which will contain four elements) will be evaluated twice. For example, take the above-mentioned input:
 */


//Efficient Approach
class AverageOfSubarrayOfSizeK_Second {
 public:
  static vector<double> findAverages(int K, const vector<int>& arr) {
    vector<double> result(arr.size() - K + 1);
    double windowSum = 0;
    int windowStart = 0;
    for (int windowEnd = 0; windowEnd < arr.size(); windowEnd++) {
      windowSum += arr[windowEnd];  // add the next element
      // slide the window, we don't need to slide if we've not hit the required window size of 'k'
      if (windowEnd >= K - 1) {
        result[windowStart] = windowSum / K;  // calculate the average
        windowSum -= arr[windowStart];        // subtract the element going out
        windowStart++;                        // slide the window ahead
      }
    }

    return result;
  }
};



#endif /* Sliding_Window_h */

// MARK: - MAIN
/*
 int main(int argc, char* argv[]) {
   vector<double> result =
       AverageOfSubarrayOfSizeK::findAverages(5, vector<int>{1, 3, 2, 6, -1, 4, 1, 8, 2});
   cout << "Averages of subarrays of size K: ";
   for (double d : result) {
     cout << d << " ";
   }
   cout << endl;
 }
 */
