//
//  206_Reverse_LinkedList.h
//  TheInterview
//
//  Created by Mr Kes on 6/9/21.
//

#ifndef _06_Reverse_LinkedList_h
#define _06_Reverse_LinkedList_h
ListNode* reverseList(ListNode* head){
    if(head == NULL || head->next == NULL){return head;}
    ListNode* prev = head;
    ListNode* curr = prev->next;
    
    while(curr != NULL){
        prev->next = curr->next;
        curr->next = head;
        head = curr;
        curr = prev->next;
    }
    return head;
}


#endif /* _06_Reverse_LinkedList_h */
