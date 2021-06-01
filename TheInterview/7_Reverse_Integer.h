//
//  7_Reverse_Integer.h
//  TheInterview
//
//  Created by Mr Kes on 6/1/21.
//

#ifndef __Reverse_Integer_h
#define __Reverse_Integer_h

int reverse(int x) {
    
    if(x < INT_MIN || x > INT_MAX){return 0;}
    int reversedNumber = 0;
    
    while(x){
        reversedNumber = reversedNumber * 10 + x % 10;
        x /= 10;
    }
    
    return (reversedNumber<INT_MIN || reversedNumber>INT_MAX) ? 0 : reversedNumber;
}

#endif /* __Reverse_Integer_h */
