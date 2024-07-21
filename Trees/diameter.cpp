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

    int height(TreeNode* root, int& maxDist) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        if(root == nullptr) return 0;

        int lh = height(root->left, maxDist);
        int rh = height(root->right, maxDist);

        maxDist = max(maxDist, lh + rh);

        return max(lh, rh) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int maxDist = 0;
        int k = height(root, maxDist);
        return maxDist;
    }
};

int main() {
    return 0;
}