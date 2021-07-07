//
//  102_Binary_Tree_Level_Order_Traversal.h
//  TheInterview
//
//  Created by Mr Kes on 6/25/21.
//

#ifndef _02_Binary_Tree_Level_Order_Traversal_h
#define _02_Binary_Tree_Level_Order_Traversal_h

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> v;
    queue<TreeNode*> q;
    if(root){ q.push(root);}
    while(q.empty() == false){
        int length = q.size();
        vector<int> row;
        
        while(length--){
            
            TreeNode* node = q.front();
            q.pop();
            row.push_back(node->val);
            
            if(node->left != NULL){
                q.push(node->left);
            }
            
            if(node->right != NULL){
                q.push(node->right);
            }
        }
        v.push_back(row);
    }
    return v;
}

#endif /* _02_Binary_Tree_Level_Order_Traversal_h */
