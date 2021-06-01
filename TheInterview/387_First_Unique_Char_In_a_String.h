//
//  387_First_Unique_Char_In_a_String.h
//  TheInterview
//
//  Created by Mr Kes on 6/1/21.
//

#ifndef _87_First_Unique_Char_In_a_String_h
#define _87_First_Unique_Char_In_a_String_h

int firstUniqChar(string s) {
       
    unordered_map<char, int> charMap;
    
    // add the characters to the hash map
    for (auto &c : s) {
        charMap[c]++;
    }
    
    // Go through the list again and check if the letters appearances
    for (int i = 0; i < s.size(); i++) {
        if (charMap[s[i]] == 1)
            return i;
    }
    
    return -1;
}

#endif /* _87_First_Unique_Char_In_a_String_h */
