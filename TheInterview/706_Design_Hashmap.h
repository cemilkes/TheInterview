//
//  706_Design_Hashmap.h
//  TheInterview
//
//  Created by Mr Kes on 6/22/21.
//

#ifndef _06_Design_Hashmap_h
#define _06_Design_Hashmap_h
class HashMapNode{
  public:
    int key;
    int value;
    HashMapNode* next;
    
    HashMapNode(){
        key = -1;
        value = -1;
        next = NULL;
    }
    
    HashMapNode(int key, int value){
        this->key = key;
        this->value = value;
    }
};


class MyHashMap {
    
private:
    HashMapNode** bucket;
    int capacity;

    
    int hashcode(int key){
        return (abs(key) % capacity);
    }
    
    
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        int capacity = 10000;
        bucket = new HashMapNode* [capacity];
        for(int i = 0; i < capacity; i++){
            bucket[i] = NULL;
        }
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        if(!contains(key)){
            int h = hashcode(key);
            HashMapNode* newNode = new HashMapNode(key, value);
            newNode->next = bucket[h];
            bucket[h] = newNode;
        }else{
            int h = hashcode(key);
            HashMapNode* current = bucket[h];
            while(current != NULL){
                if(current->key == key){
                  current->value = value;
                 }
                current = current->next;
            }
        }

    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        if(contains(key)){
            int h = hashcode(key);
            HashMapNode* current = bucket[h];
            while(current != NULL){
                if(current->key == key){
                    return current->value;
                }
                current = current->next;
            }
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        if(contains(key)){
            int h = hashcode(key);
            if(bucket[h]->key == key){
                HashMapNode* trash = bucket[h];
                bucket[h] = bucket[h]->next;
                delete trash;
            }else{
                HashMapNode* current = bucket[h];
                while(current->next != NULL){
                    if(current->next->key == key){
                        HashMapNode* trash = current->next;
                        current->next = current->next->next;
                        delete trash;
                        break;
                    }
                    current = current->next;
                }
            }
        }else{
            return;
        }
    }
    
    bool contains(int key){
    
        int h = hashcode(key);
        HashMapNode* current = bucket[h];
        while(current != NULL){
            if(current->key == key){
                return true;
            }
            current = current->next;
        }
        return false;
    }
    
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

#endif /* _06_Design_Hashmap_h */
