//
//  IsUniqueChars.h
//  TheInterview
//
//  Created by Mr Kes on 7/1/21.
//

#ifndef IsUniqueChars_h
#define IsUniqueChars_h
bool isUniqueChars(string &s) {
    unordered_map<char, int> charactersOfMap;
    char c;
    
    for (int i = 0; i < s.length(); i++) {
        c = s[i];
        if (charactersOfMap.find(c) != charactersOfMap.end()) {
            charactersOfMap[c]++;
            return false;
        }else{
            charactersOfMap[c] = 1;
        }
    }
    return true;
}

#endif /* IsUniqueChars_h */
