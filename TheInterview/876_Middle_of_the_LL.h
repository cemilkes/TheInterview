//
//  876_Middle_of_the_LL.h
//  TheInterview
//
//  Created by Mr Kes on 5/5/21.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#ifndef _76_Middle_of_the_LL_h
#define _76_Middle_of_the_LL_h

ListNode* middleNode(ListNode* head) {
    if(head == NULL || head->next == NULL){ return head; }
    if(head->next->next == NULL){ return head->next; }
    
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

// This will return first one of two middle nodes, when the number of nodes in a LL is even.
/*
 if(head == NULL || head->next == NULL){ return head; }
 //if(head->next->next == NULL){ return head->next; }

     ListNode* fast = head, slow = head;
     while(slow && fast & fast->next){
         fast = fast->next->next;
         if(fast != NULL){
 slow = slow->next;
 }
 }
 return slow;

 */

#endif /* _76_Middle_of_the_LL_h */
