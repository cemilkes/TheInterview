//
//  GenerateBinaryNumbers_Q.h
//  TheInterview
//
//  Created by Mr Kes on 8/17/21.
//

// if n = 3 then result = {"1", "10", "11"}
// if n = 5 then result = {"1", "10", "11", "100", "101"}

#ifndef GenerateBinaryNumbers_Q_h
#define GenerateBinaryNumbers_Q_h

string* findBin(int n){
  //return your answers in the following result array
    string* result = new string[n];
    if (n == 0) {
        return result;
    }
    queue<int> q;
    q.push(1);
    
    string zero, one;
    for (int i = 0; i < n ; i++) {
        // do something
        result[i] = to_string(q.front());
        q.pop();
        
        zero = result[i] + "0";
        one = result[i] + "1";
        
        q.push(stoi(zero));
        q.push(stoi(one));
    }

    return result;
}

#endif /* GenerateBinaryNumbers_Q_h */
/*
 string* result = new string[3];
 result = findBin(3);
 
 for (int i = 0; i < 3; i++) {
     cout << result[i] << " ";
 }
 
 */
