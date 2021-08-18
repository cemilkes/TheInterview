//
//  TrieNode.h
//  TheInterview
//
//  Created by Mr Kes on 8/18/21.
//

#ifndef TrieNode_h
#define TrieNode_h

#define ALPHABET 27

class TrieNode {
public:
    TrieNode* children[ALPHABET];
    bool isEndWord;
    
    TrieNode();
    void markAsALeaf();
    void unMarkAsALeaf();
    
};

TrieNode::TrieNode(){
    this->isEndWord = false;
    for (int i = 0; i < ALPHABET; i++) {
        this->children[i] = NULL;
    }
}

void TrieNode::markAsALeaf(){
    this->isEndWord = true;
}

void TrieNode::unMarkAsALeaf(){
    this->isEndWord = false;
}

class Trie {
  
private:
    TrieNode* root;
public:
    Trie();
    int getIndex(char t);
    void insertNode(string key);
    bool searchNode(string key);
    bool deleteNode(string key);
    
};

Trie::Trie(){
    root = new TrieNode();
}

int Trie::getIndex(char t){
    return t - 'a';
}

void Trie::insertNode(string key){
    
}

bool Trie::searchNode(string key){
    return false;
}

bool Trie::deleteNode(string key){
    return false;
}

#endif /* TrieNode_h */

 // MARK: - MAIN
/*
 string keys[9] = {"the", "a", "there", "answer", "any", "by", "bye", "their","abc"};

   Trie * t = new Trie();

   // Construct trie
   for (int i = 0; i < 9 ; i++)
   {
     t->insertNode(keys[i]);
   }

   cout << totalWords(t->getRoot());
 */
