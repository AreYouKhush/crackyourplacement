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

    void dfs(TreeNode* root, int& sum, bool left) {
        if(root == nullptr) return;
        if(left && root->left == nullptr && root->right == nullptr) sum += root->val;
        dfs(root->left, sum, true);
        dfs(root->right, sum, false);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        dfs(root, sum, false);
        return sum;
    }
};

int main() {
    return 0;
}