//
//  344_Reverse_String.h
//  TheInterview
//
//  Created by Mr Kes on 6/1/21.
//

#ifndef _44_Reverse_String_h
#define _44_Reverse_String_h

void reverseString(vector<char>& s) {
    //if(s.size() == 0 || s.size() == 1){ return; }

            int i = 0;
            int j = s.size()-1;
            char temp;
        
            while(j >= i){
                temp = s[i];
                s[i++] = s[j];
                s[j--] = temp;
                //i++;
                //j--;
            }
}

void reverseString(string& s){
    for (int i = 0; i < s.size()/2; i++) {
        swap(s[i], s[s.size()-1-i]);
    }
    
}




#endif /* _44_Reverse_String_h */
