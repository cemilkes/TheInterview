//
//  232_Implement_Queue_Using_Stack.h
//  TheInterview
//
//  Created by Mr Kes on 6/17/21.
//

#ifndef _32_Implement_Queue_Using_Stack_h
#define _32_Implement_Queue_Using_Stack_h
class MyQueue {
public:
    /** Initialize your data structure here. */
    
    stack<int> mainS;
    stack<int> secondaryS;
    
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        mainS.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(mainS.empty()){return 0;}
        
        while(!mainS.empty()){
            secondaryS.push(mainS.top());
            mainS.pop();
        }
        
        int poppedValue = secondaryS.top();
        secondaryS.pop();
        
        while(!secondaryS.empty()){
            mainS.push(secondaryS.top());
            secondaryS.pop();
        }
        
        return poppedValue;
    }
    
    /** Get the front element. */
    int peek() {
        if(mainS.empty()){return 0;}
        while(!mainS.empty()){
            secondaryS.push(mainS.top());
            mainS.pop();
        }
        
        int peekValue = secondaryS.top();
        
         while(!secondaryS.empty()){
            mainS.push(secondaryS.top());
            secondaryS.pop();
        }
        
        return peekValue;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return mainS.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

#endif /* _32_Implement_Queue_Using_Stack_h */
