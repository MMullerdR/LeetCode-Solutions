#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int high(struct TreeNode* root) {
    if ( root == NULL ) {
        return 0;
    }
    else {
        int left = high(root->left);
        int right = high(root->right);

        if (left == -1 || right == -1) return -1;
        if ( abs(left - right) > 1) return -1;
        
        if ( left > right ) return left + 1;
        else return right + 1;
    }
    return -1;
}

bool isBalanced(struct TreeNode* root) {
    if ( root == NULL ) {
        return true;
    } 
    else if ( high(root) != -1 ) {
        return true;
    }
    else {
        return false;
    }
    
}