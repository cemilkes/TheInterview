//
//  Linked_List_Cycle_II.h
//  TheInterview
//
//  Created by Mr Kes on 6/15/21.
//

#ifndef Linked_List_Cycle_II_h
#define Linked_List_Cycle_II_h

ListNode* detectCycle(ListNode* head){
    if(head || head->next){return head;}
    
    ListNode* fast = head;
    ListNode* slow = head;
    ListNode* temp1 = head;
    
    while(fast->next && fast->next->next){
        fast = fast->next->next;
        slow = slow->next;
        
        if(slow == fast){
            ListNode* temp2 = fast;
            while(temp1 == temp2){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            return temp1;
        }
    }
    return head;
    
    
    
}

#endif /* Linked_List_Cycle_II_h */
