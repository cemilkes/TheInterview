//
//  199_Binary_Tree_Right_Side_View.h
//  TheInterview
//
//  Created by Mr Kes on 6/25/21.
//

#ifndef _99_Binary_Tree_Right_Side_View_h
#define _99_Binary_Tree_Right_Side_View_h
vector<int> rightSideView(TreeNode* root) {
    
    vector<int> v;
    if (root == NULL){ return v;}
    
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        // get number of nodes for each level
        int length = q.size();
        
        // traverse all the nodes of the current level
        while (length--) {
            
            TreeNode* curr = q.front();
            q.pop();
            
            // print the last node of each level
            if (length == 0) {
                v.push_back(curr->val);
            }
            // if left child is not null push it into the stack
            if (curr->left){ q.push(curr->left); }
            
            // if right child is not null push it into the stack
            if (curr->right){ q.push(curr->right); }
            
        }
    }
    return v;
}
#endif /* _99_Binary_Tree_Right_Side_View_h */
