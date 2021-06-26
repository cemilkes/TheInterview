//
//  222_Count_Complete_Tree_Nodes.h
//  TheInterview
//
//  Created by Mr Kes on 6/26/21.
//

#ifndef _22_Count_Complete_Tree_Nodes_h
#define _22_Count_Complete_Tree_Nodes_h
int countNodes(TreeNode* root) {
    
    if(root==NULL){ return 0; }
    
    int count=1;
    queue<TreeNode*> q;
    q.push(root);
    
    while(!q.empty()){
        
        TreeNode* current=q.front();
        
        if(current->left!=NULL)
        {
            q.push(current->left);
            count++;
        }
        
        if(current->right!=NULL)
        {
            q.push(current->right);
            count++;
        }
        
        q.pop();
    }
    return count;
}

#endif /* _22_Count_Complete_Tree_Nodes_h */
