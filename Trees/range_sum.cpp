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

    void dfs(TreeNode* root, int low, int high, int& sum) {
        if(root == nullptr) return;
        if(root->val <= high && root->val >= low) sum += root->val;
        dfs(root->left, low, high, sum);
        dfs(root->right, low, high, sum);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        dfs(root, low, high, sum);
        return sum;
    }
};

int main() {
    return 0;
}