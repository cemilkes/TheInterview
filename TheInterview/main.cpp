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
using namespace std;

void dfsUtil(vector<vector<int>> &matrix, int row, int col, vector<vector<bool>> &seen);

void dfsOn2DArray(vector<vector<int>> &matrix){
    int cols = matrix[0].size();
    int rows = matrix.size();
    
    vector<vector<bool>> seen(cols, vector<bool>(rows, false));
    dfsUtil(matrix, 0, 0, seen);
}

void dfsUtil(vector<vector<int>> &matrix, int row, int col, vector<vector<bool>> &seen){
    
    if (row < 0 || col < 0 || row >= matrix.size() || col >= matrix[0].size() || seen[row][col]) {
        return;
    }
    seen[row][col] = true;
    cout << matrix[row][col] << " ";
    dfsUtil(matrix, row, col+1, seen);
    dfsUtil(matrix, row+1, col, seen);
    dfsUtil(matrix, row-1, col, seen);
    dfsUtil(matrix, row, col-1, seen);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    vector<vector<int>> matrix = {
                                    {1,2,3},
                                    {4,5,6},
                                    {7,8,9}
                                            };
    
    
    dfsOn2DArray(matrix);
    cout << endl;
    return 0;
}
