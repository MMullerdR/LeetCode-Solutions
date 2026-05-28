#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if ( root == NULL ) return NULL;

    if ( root->val == val ) {
        return root;
    } 
    else {

        struct TreeNode* left = searchBST(root->left, val);
        struct TreeNode* right = searchBST(root->right, val);
        
        if ( left ) {
            return left;
        }
        else if ( right ) {
            return right;
        }
        else {
            return NULL;
        }
    }
}