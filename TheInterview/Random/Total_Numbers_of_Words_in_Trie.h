//
//  Total_Numbers_of_Words_in_Trie.h
//  TheInterview
//
//  Created by Mr Kes on 8/18/21.
//

#ifndef Total_Numbers_of_Words_in_Trie_h
#define Total_Numbers_of_Words_in_Trie_h
int totalWords(TrieNode* root){
    
    if(root == NULL){return -1;}
    int numberOfWords = 0;
    TrieNode* current = root;
    
    if (current->isEndWord) {
        numberOfWords++;
    }
    
    for (int i = 0; i < ALPHABET; i++) {
        if (current->children[i] != NULL) {
            numberOfWords += totalWords(current->children[i]);
        }
    }
    
    return numberOfWords;
}

#endif /* Total_Numbers_of_Words_in_Trie_h */
