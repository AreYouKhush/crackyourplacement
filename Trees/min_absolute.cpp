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
    int getMinimumDifference(TreeNode* root) {
        vector<int> vals;
        inOrder(root, vals);

        int minDiff = INT_MAX;
        for (int i = 1; i < vals.size(); ++i) {
            minDiff = min(minDiff, vals[i] - vals[i - 1]);
        }
        return minDiff;
    }
    private:
    void inOrder(TreeNode* node, vector<int>& vals) {
        if (!node) return;
        inOrder(node->left, vals);
        vals.push_back(node->val);
        inOrder(node->right, vals);
    }
};

int main() {
    return 0;
}