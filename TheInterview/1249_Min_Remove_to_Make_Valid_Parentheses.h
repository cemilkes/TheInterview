//
//  1249_Min_Remove_to_Make_Valid_Parentheses
//  TheInterview
//
//  Created by Mr Kes on 6/17/21.
//

#ifndef _1249_Min_Remove_to_Make_Valid_Parentheses
#define _1249_Min_Remove_to_Make_Valid_Parentheses
string minRemoveToMakeValid(string s) {
        
        stack<int> stackOfParenth;
        
        if(s.length() == 0){return s;}
        
        for(int i = 0; i < s.length(); i++){
            
            char c = s[i];
            
            if(c == '('){
                
                stackOfParenth.push(i);
            
            }else if(c == ')'){
            
                if(!stackOfParenth.empty() && s[stackOfParenth.top()] == '('){
                    stackOfParenth.pop();
                }else{
                     stackOfParenth.push(i);
                }
            }else{
                continue;
            }

        }
        
        
        while(!stackOfParenth.empty()){
            s.erase(stackOfParenth.top() , 1);
            stackOfParenth.pop();
        }
        
        return s;
        
    }

#endif /* _1249_Min_Remove_to_Make_Valid_p_h */
