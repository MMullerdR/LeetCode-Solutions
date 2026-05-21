#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* invertTree(struct TreeNode* root) {
    if ( root == NULL ) {
        return NULL;
    }
    if ( root->left != NULL && root->right != NULL ) {
        struct TreeNode *aux = root->left;
        root->left = root->right;
        root->right = aux;
    } else if ( root->left != NULL || root->right != NULL) {
        struct TreeNode *aux = root->left;
        root->left = root->right;
        root->right = aux;
    } else {
        return root;
    }
    invertTree(root->left);
    invertTree(root->right);

    return root;
}