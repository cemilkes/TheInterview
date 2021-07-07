//
//  112_Path_Sum.h
//  TheInterview
//
//  Created by Mr Kes on 7/7/21.
//

#ifndef _12_Path_Sum_h
#define _12_Path_Sum_h
bool hasPathSum(TreeNode* root, int targetSum) {
    
    if(root == NULL){
        return false;
    }
    
    if(root->val == targetSum && root->left == NULL && root->right == NULL){
        return true;
    }
    
    return (hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val));
}

#endif /* _12_Path_Sum_h */

// MARK: - Complexity
// O(n) time complexity and O(n) space complexity. This space is used the store recursion stack. The worst case will be happen if given tree is a linked list.
