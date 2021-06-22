//
//  705_Design_Hashset.h
//  TheInterview
//
//  Created by Mr Kes on 6/22/21.
//

#ifndef _05_Design_Hashset_h
#define _05_Design_Hashset_h
struct HashNode{
  int data;
  HashNode* next;
  HashNode(int data = 0, HashNode* next = NULL){
      this->data = data;
      this->next = next;
  }
    
};

class MyHashSet {

private:
    
    HashNode** elements;
    int capacity;
    int mySize;
    
    int hashCode(int value) const{
        return (abs(value) % capacity);
    }
    
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        capacity = 10;
        mySize = 0;
        elements = new HashNode*[capacity]();
    }
    
    void add(int key) {
        int h = hashCode(key);
        if(!contains(key)){
            HashNode* newNode = new HashNode();
            newNode->data = key;
            newNode->next = elements[h];
            elements[h] = newNode;
            mySize++;
        }
    }
    
    void remove(int key) {
        if(!contains(key)){ return; }
        int h = hashCode(key);
        
        if(elements[h]->data == key){
           HashNode* trash = elements[h];
           elements[h] = elements[h] -> next;
           delete trash;
           mySize--;
        }else{
            HashNode* curr = elements[h];
            while(curr->next != NULL){
                if(curr->next->data == key){
                    HashNode* trash = curr->next;
                    curr->next = curr->next->next;
                    mySize--;
                    delete trash;
                    break;
                }
                curr = curr->next;
            }
        }  
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int h = hashCode(key);
        HashNode* current = elements[h];
        while(current != NULL){
            if(current->data == key){
                return true;
            }
            current = current->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

#endif /* _05_Design_Hashset_h */
