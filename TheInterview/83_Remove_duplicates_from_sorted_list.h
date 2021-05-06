//
//  83_Remove_duplicates_from_sorted_list.h
//  TheInterview
//
//  Created by Mr Kes on 5/6/21.

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

#ifndef _3_Remove_duplicates_from_sorted_list_h
#define _3_Remove_duplicates_from_sorted_list_h

ListNode* deleteDuplicates(ListNode* head) {
    
    if(head == NULL || head->next == NULL){return head;}
    
    ListNode* curr = head;
    
    while(curr != NULL && curr->next != NULL){
        if(curr->next->val == curr->val){
            ListNode* trash = curr->next;
            curr->next = curr->next->next;
            delete trash;
        }else{
            curr = curr->next;
        }
    }
    return head;
}

#endif /* _3_Remove_duplicates_from_sorted_list_h */

// MARK: - #MAIN
/*
 ListNode *head = new ListNode(1);
 head->next = new ListNode(1);
 head->next->next = new ListNode(2);
 head->next->next->next = new ListNode(3);
 head->next->next->next->next = new ListNode(3);
 head->next->next->next->next->next = new ListNode(4);
 
 deleteDuplicates(head);
 
 printLinkedList(head);
 */
