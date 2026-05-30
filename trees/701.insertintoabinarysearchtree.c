#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    if ( root == NULL ) {
        struct TreeNode *node = malloc(sizeof(*node));
        node->val = val;
        node->left = NULL;
        node->right = NULL;
        root = node;
    }
    else{
        if ( val < root->val ) {
            root->left = insertIntoBST(root->left, val);
        }
        else if ( val > root->val ) {
            root->right = insertIntoBST(root->right, val);
        }
    }
    
    return root;    
}