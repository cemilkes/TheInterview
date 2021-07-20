//
//  Fast_Slow_Pointers.h
//  TheInterview
//
//  Created by Mr Kes on 7/20/21.
//

#ifndef Fast_Slow_Pointers_h
#define Fast_Slow_Pointers_h
/*
 The **Fast & Slow** pointer approach, also known as the **Hare & Tortoise algorithm**, is a pointer algorithm that uses two pointers which move through the array (or sequence/LinkedList) at different speeds. This approach is quite useful when dealing with cyclic LinkedLists or arrays.

 By moving at different speeds (say, in a cyclic LinkedList), the algorithm proves that the two pointers are bound to meet. The fast pointer should catch the slow pointer once both the pointers are in a cyclic loop.

 One of the famous problems solved using this technique was **Finding a cycle in a LinkedList**. Let’s jump onto this problem to understand the **Fast & Slow** pattern.

 Imagine we have a slow and a fast pointer to traverse the LinkedList. In each iteration, the slow pointer moves one step and the fast pointer moves two steps. This gives us two conclusions:

 1. If the LinkedList doesn’t have a cycle in it, the fast pointer will reach the end of the LinkedList before the slow pointer to reveal that there is no cycle in the LinkedList.
 2. The slow pointer will never be able to catch up to the fast pointer if there is no cycle in the LinkedList.
 */

// MARK: - #Linked List Has Cycle
/*
 static bool hasCycle(ListNode *head) {
     ListNode *slow = head;
     ListNode *fast = head;
     while (fast != nullptr && fast->next != nullptr) {
       fast = fast->next->next;
       slow = slow->next;
       if (slow == fast) {
         return true;  // found the cycle
       }
     }
     return false;
   }
 */

#endif /* Fast_Slow_Pointers_h */
