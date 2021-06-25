//
//  104_Maximum_Depth_of_Binary_Tree.h
//  TheInterview
//
//  Created by Mr Kes on 6/25/21.
//

#ifndef _04_Maximum_Depth_of_Binary_Tree_h
#define _04_Maximum_Depth_of_Binary_Tree_h
int maxDepthHelper(TreeNode* root, int count){
    if(root == NULL){
        return count;
    }
    count++;
    return max(maxDepthHelper(root->left, count), maxDepthHelper(root->right, count));
}

int maxDepth(TreeNode* root) {
    int count = 0;
    return maxDepthHelper(root, count);
}

#endif /* _04_Maximum_Depth_of_Binary_Tree_h */

// MARK: - #Without Using Helper function
//int maxDepth(TreeNode* root){
//    if (root == NULL) {
//        return 0;
//    }
//    return max(1 + maxDepth(root->left), 1 + maxDepth(root->right));
//
//}


// MARK: - #Iteratively
/*
 int maxDepth(TreeNode* root) {
     if (root == NULL) {
       return 0;
     }

     vector<pair<int, TreeNode*>> my_stack;
     my_stack.push_back(pair<int, TreeNode*>(1, root));
     int max_depth = 0;
     while (!my_stack.empty()) {
       pair<int, TreeNode*> my_pair = my_stack.back();
       int c_depth = get<0>(my_pair);
       TreeNode* c_node = get<1>(my_pair);
       max_depth = max(max_depth, c_depth);
       my_stack.pop_back();
       if (c_node->left != NULL) {
         my_stack.push_back(pair<int, TreeNode*>(c_depth + 1, c_node->left));
       }
       if (c_node->right != NULL) {
         my_stack.push_back(pair<int, TreeNode*>(c_depth + 1, c_node->right));
       }
     }
     return max_depth;
   }
 */
