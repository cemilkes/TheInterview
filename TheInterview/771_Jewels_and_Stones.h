//
//  771_Jewels_and_Stones.h
//  TheInterview
//
//  Created by Mr Kes on 6/3/21.
//

#ifndef _71_Jewels_and_Stones_h
#define _71_Jewels_and_Stones_h
int numJewelsInStones(string jewels, string stones) {
    
    //unordered_set<char> setJ(jewels.begin(), jewels.end());
    unordered_set<char> setJ;
    for (int i = 0; i < jewels.size(); i++) {
        setJ.insert(jewels[i]);
    }

    int counter = 0;
    for (int i = 0; i < stones.size(); i++) {
        if(setJ.find(stones[i]) != setJ.end()){
            counter++;
        }
    }
    return counter;
}

#endif /* _71_Jewels_and_Stones_h */

// MARK: - #Another Solution
/*
int numJewelsInStones(string jewels, string stones) {
    int counter = 0;
    unordered_set<char> setJ(jewels.begin(), jewels.end());
    for(char s: stones){
        if(setJ.count(s)){
            counter++;
        }
    }
    return counter;
}
*/
