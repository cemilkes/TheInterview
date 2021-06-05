//
//  202_Happy_Number.h
//  TheInterview
//
//  Created by Mr Kes on 6/5/21.
//

#ifndef _02_Happy_Number_h
#define _02_Happy_Number_h
bool isHappy(int n){
    int sumR = 0;
    set<int> s;
    while(sumR != 1){
        sumR = 0;
        while(n != 0){
            int remainder = n % 10;
            sumR += remainder*remainder;
            n = n / 10;
        }
        if(s.find(sumR) != s.end()){
            return false;
        }else{
            s.insert(sumR);
        }
        n = sumR;
    }
    return true;
}


#endif /* _02_Happy_Number_h */
