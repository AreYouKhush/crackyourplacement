#include<bits/stdc++.h>
using namespace std;

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

    bool check(TreeNode* l, TreeNode* r){
        if(l == nullptr && r == nullptr) return 1;
        else if(l == nullptr || r == nullptr) return 0;

        bool i = check(l->left, r->right);
        bool j = check(l->right, r->left);

        return i && j && l->val == r->val;
    }

    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right) return true;
        if(root->left == nullptr || root->right == nullptr) return false;
        return check(root->left, root->right);
    }
};

int main() {
    return 0;
}