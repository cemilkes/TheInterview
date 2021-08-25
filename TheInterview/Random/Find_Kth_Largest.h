//
//  Find_Kth_Largest.h
//  TheInterview
//
//  Created by Mr Kes on 8/25/21.
//

#ifndef Find_Kth_Largest_h
#define Find_Kth_Largest_h

int findKthLargest(int arr[], int size, int k){
        
    priority_queue<int> maxHeap;
    for (int i = 0 ; i < size; i++) {
        maxHeap.push(arr[i]);
    }
    
    for (int i = 0; i < k-1; i++) {
        maxHeap.pop();
    }
    
    return maxHeap.top();
    
}

#endif /* Find_Kth_Largest_h */

/*
 int arr[] = {1,10};
 int size = 2;
 int k = 1;
 
 cout << findKthLargest(arr, size, k) << endl;
 */
