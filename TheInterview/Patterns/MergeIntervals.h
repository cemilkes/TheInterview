//
//  MergeIntervals.h
//  TheInterview
//
//  Created by Mr Kes on 7/29/21.
//

#ifndef MergeIntervals_h
#define MergeIntervals_h

// Simple and good solution with perfect video
/*  https://leetcode.com/problems/merge-intervals/solution/ */

class Interval {
 public:
  int start = 0;
  int end = 0;

  Interval(int start, int end) {
    this->start = start;
    this->end = end;
  }
};

class MergeIntervals {
 public:
  static vector<Interval> merge(vector<Interval> &intervals) {
    if (intervals.size() < 2) {
      return intervals;
    }

    // sort the intervals by start time
    sort(intervals.begin(), intervals.end(),
         [](const Interval &x, const Interval &y) { return x.start < y.start; });

    vector<Interval> mergedIntervals;

    vector<Interval>::const_iterator intervalItr = intervals.begin();
      
    Interval interval = *intervalItr;
    int start = interval.start;
      cout << " start: "<< start << "  ";
      
    int end = interval.end;
      cout << " end: "<< end << endl;
      
    while (intervalItr != intervals.end()) {
      interval = *intervalItr++;
      if (interval.start <= end) {  // overlapping intervals, adjust the 'end'
        end = max(interval.end, end);
      } else {  // non-overlapping interval, add the previous interval and reset
        mergedIntervals.push_back({start, end});
        start = interval.start;
        end = interval.end;
      }
    }
    // add the last interval
    mergedIntervals.push_back({start, end});
    return mergedIntervals;
  }
};

#endif /* MergeIntervals_h */

// MARK: - #MAIN
/*
 vector<Interval> input = {{1, 3}, {2, 5}, {7, 9}};
   cout << "Merged intervals: ";
   for (auto interval : MergeIntervals::merge(input)) {
     cout << "[" << interval.start << "," << interval.end << "] ";
   }
   cout << endl;

   input = {{6, 7}, {2, 4}, {5, 9}};
   cout << "Merged intervals: ";
   for (auto interval : MergeIntervals::merge(input)) {
     cout << "[" << interval.start << "," << interval.end << "] ";
   }
   cout << endl;

   input = {{1, 4}, {2, 6}, {3, 5}};
   cout << "Merged intervals: ";
   for (auto interval : MergeIntervals::merge(input)) {
     cout << "[" << interval.start << "," << interval.end << "] ";
   }
   cout << endl;
 */
