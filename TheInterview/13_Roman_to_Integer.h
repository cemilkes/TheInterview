//
//  13_Roman_to_Integer.h
//  TheInterview
//
//  Created by Mr Kes on 6/8/21.
//

#ifndef _3_Roman_to_Integer_h
#define _3_Roman_to_Integer_h
int romanToInt(string s){
    int sum = 0;
    if(s.length() == 0){return 0;}
    int i = 0;
    while(i < s.length() && i+1 <= s.length()){
        char romanNum = s[i];
        
        if(romanNum == 'I'){
            if(s[i+1] == 'V'){
                sum += 4;
                i += 2;
            }else if(s[i+1] == 'X'){
                sum += 9;
                i += 2;
            }else{
                sum += 1;
                i += 1;
            }
        }else if(romanNum == 'X'){
            if(s[i+1] == 'L'){
                sum += 40;
                i += 2;
            }else if(s[i+1] == 'C'){
                sum += 90;
                i += 2;
            }else{
                sum += 10;
                i += 1;
            }
        }else if(romanNum == 'C'){
            if(s[i+1] == 'D'){
                sum += 400;
                i += 2;
            }else if(s[i+1] == 'M'){
                sum += 900;
                i += 2;
            }else{
                sum += 100;
                i += 1;
            }
        }else if(romanNum == 'V'){
            sum += 5;
            i++;
        }
        else if(romanNum == 'L'){
            sum += 50;
            i++;
        }else if(romanNum == 'D'){
            sum += 500;
            i++;
        }else if(romanNum == 'M'){
            sum += 1000;
            i++;
        }
    }
    return sum;
}


#endif /* _3_Roman_to_Integer_h */
