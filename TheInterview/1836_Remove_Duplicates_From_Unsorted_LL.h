//
//  1836_Remove_Duplicates_From_Unsorted_LL.h
//  TheInterview
//
//  Created by Mr Kes on 5/6/21.
//

#ifndef _836_Remove_Duplicates_From_Unsorted_LL_h
#define _836_Remove_Duplicates_From_Unsorted_LL_h

ListNode* deleteDuplicatesUnsorted(ListNode* head) {
    
// Solve using hash table
    
    
    return head;
}
#endif /* _836_Remove_Duplicates_From_Unsorted_LL_h */


//This will remove only one of the duplicated nodes from the list (not both) {1,2,1,3} -> {1,2,3} will not be {2,3}
/*
ListNode* deleteDuplicatesUnsorted(ListNode* head){
    ListNode *curr, *currNext, *dup;
    curr = head;
    
    while(curr != NULL && curr->next != NULL){
        currNext = curr;
        while(currNext != NULL){
            if(curr->val == currNext->next->val){
                dup = currNext->next;
                currNext->next = currNext->next->next;
                delete dup;
            }
        }
        curr = curr->next;
    }
}
*/
