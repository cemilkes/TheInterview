//
//  TreeNode.h
//  TheInterview
//
//  Created by Mr Kes on 6/25/21.
//

#ifndef TreeNode_h
#define TreeNode_h


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#endif /* TreeNode_h */
