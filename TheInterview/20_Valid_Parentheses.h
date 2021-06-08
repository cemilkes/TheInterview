//
//  20_Valid_Perantheses.h
//  TheInterview
//
//  Created by Mr Kes on 6/8/21.
//

#ifndef _0_Valid_Parentheses_h
#define _0_Valid_Parentheses_h
bool isValid(string s) {
    
    stack<char> c;
    for (int i = 0; i < s.length(); i++) {
        char bracket = s[i];
        
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            c.push(bracket);
            
        }else if(bracket == ')'){
            if (c.empty() || c.top() != '(') {
                return false;
            }else{
                c.pop();
            }
            
        }else if(bracket == '}'){
            if (c.empty() || c.top() != '{') {
                return false;
            }else{
                c.pop();
            }
            
        }else if(bracket == ']'){
            if (c.empty() || c.top() != '[') {
                return false;
            }else{
                c.pop();
            }
        }
    }
    
    if (s == " ") {
        return true;
    }
    
    return c.empty();
}

#endif /* _0_Valid_Parentheses_h */
