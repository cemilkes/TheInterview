//
//  main.cpp
//  TheInterview
//
//  Created by Mr Kes on 12/28/20.
//

#include <stdio.h>
#include <iostream>
#include "Helper/Libraries.h"
#include "Helper/ListNode.h"
#include "CTCI/Chapter-1/IsUniqueChars.h"
#include "Patterns/MergeIntervals.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<Interval> input = {{6, 7}, {2, 4}, {5, 9}};
      cout << "Merged intervals: ";
      for (auto interval : MergeIntervals::merge(input)) {
        cout << "[" << interval.start << "," << interval.end << "] ";
      }
      cout << endl;

  
    return 0;
}
