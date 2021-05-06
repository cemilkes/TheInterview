//
//  Helper_Functions.h
//  TheInterview
//
//  Created by Mr Kes on 5/6/21.
//

#ifndef Helper_Functions_h
#define Helper_Functions_h
#include "ListNode.h"
using namespace std;

void printLinkedList(ListNode* head){
    ListNode* curr = head;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

#endif /* Helper_Functions_h */
