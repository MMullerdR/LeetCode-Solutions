#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool auxFunction(struct TreeNode *root, long min, long max) {
    if (root == NULL) {
        return true;
    }

    if (root->val <= min || root->val >= max) {
        return false;
    } 

    bool left = auxFunction(root->left, min, root->val);
    bool right = auxFunction(root->right, root->val, max);

    return left && right;
}

bool isValidBST(struct TreeNode* root) {
    return auxFunction(root, LONG_MIN, LONG_MAX);
}