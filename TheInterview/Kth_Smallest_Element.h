//
//  Kth_Smallest_Element.h
//  TheInterview
//
//  Created by Mr Kes on 6/10/21.
//

#ifndef Kth_Smallest_Element_h
#define Kth_Smallest_Element_h

int findKthSmallestNumber(const vector<int> &nums, int k) {
    
    vector<int> maxHeap(nums.begin(), nums.begin() + k);
    make_heap(maxHeap.begin(), maxHeap.end());

    for(int i = k; i < nums.size(); i++){
        if(nums[i] < maxHeap.front()){
          pop_heap(maxHeap.begin(), maxHeap.end());
          maxHeap.pop_back();

          maxHeap.push_back(nums[i]);
          push_heap(maxHeap.begin(), maxHeap.end());
        }
    }

    return maxHeap.front();
  }

#endif /* Kth_Smallest_Element_h */

// MARK: - # Using PQ
/*
 int findKthSmallestNumber(const vector<int> &nums, int k){
     
 // Priority Queue design the numbers in decreasing order.
 priority_queue<int> maxHeap;
     
 //put first k numbers in the heap
 for(int i = 0; i < k; i++){
         maxHeap.push(nums[i]);
 }


 for(int i = k; k < nums.size(); i++){
     if(nums[i] < maxHeap.top()){
         maxHeap.pop();
     maxHeap.push(nums[i]);
 }
 }

 //the root of the heap is kth smallest number
 return maxHeap.top();

 }

 */


/* Static Array
 
 int findKthSmallest(int arr[], int size, int k){
     
     sort(arr, arr+size);
     int kthSmallest = arr[size - k];
     return kthSmallest;
     
 }
 */
// MARK: - #MAIN

/*
 int result = KthSmallestNumber::findKthSmallestNumber(vector<int>{1, 5, 12, 2, 11, 5}, 3);
   cout << "Kth smallest number is: " << result << endl;

   // since there are two 5s in the input array, our 3rd and 4th smallest numbers should be a '5'
   result = KthSmallestNumber::findKthSmallestNumber(vector<int>{1, 5, 12, 2, 11, 5}, 4);
   cout << "Kth smallest number is: " << result << endl;

   result = KthSmallestNumber::findKthSmallestNumber(vector<int>{5, 12, 11, -1, 12}, 3);
   cout << "Kth smallest number is: " << result << endl;
 */
