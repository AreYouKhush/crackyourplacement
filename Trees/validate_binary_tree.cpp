#include<bits/stdc++.h>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isValidBST(TreeNode* root, long long lb = LLONG_MIN, long long ub = LLONG_MAX) {
        if ( !root ) return true ;
        if ( root->val >= ub || root->val <= lb ) return false ;
        return isValidBST(root->left,lb,root->val) && isValidBST(root->right,root->val,ub) ;
    }
};

int main() {
    return 0;
}
