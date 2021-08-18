//
//  Find_Min_Value_In_BST.h
//  TheInterview
//
//  Created by Mr Kes on 8/18/21.
//

#ifndef Find_Min_Value_In_BST_h
#define Find_Min_Value_In_BST_h
int findMin(TreeNode* root){
    
    if(root == NULL){return -1;}
    
    while (root->left != NULL) {
        root = root->left;
    }
    
    return root->val;
    
}

int findMinRecur(TreeNode* root){
    if(root == NULL){
        return -1;
    }else if (root->left == NULL) {
        return root->val;
    }else{
        return findMinRecur(root->left);
    }
}

#endif /* Find_Min_Value_In_BST_h */
