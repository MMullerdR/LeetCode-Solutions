#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if ( root == NULL ) {
        return NULL;
    }
    if ( key == root->val ){
        if ( root->right && root->left ){
            struct TreeNode* aux = root->right;
            while ( aux->left ){
                aux = aux->left;
            }
            root->val = aux->val;
            root->right = deleteNode(root->right, aux->val);
        }
        else if ( root->right ){
            struct TreeNode* aux = root->right;
            free(root);
            return aux;
        }
        else if ( root->left ){
            struct TreeNode* aux = root->left;
            free(root);
            return aux;
        }
        else {
            free(root);
            return NULL;
        }

    }
    else if ( key > root->val ) {
        root->right = deleteNode(root->right, key);
    }
    else {
        root->left = deleteNode(root->left, key);
    }
    
    return root;
}