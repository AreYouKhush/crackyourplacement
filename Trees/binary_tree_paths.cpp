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

    void dfs(TreeNode* root, vector<string>& res, string temp) {
        if(root == nullptr) return;
        temp += to_string(root->val);
        if(root->left == nullptr && root->right == nullptr) {
            res.push_back(temp);
            return;
        }
        temp += "->";
        dfs(root->left, res, temp);
        dfs(root->right, res, temp);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string temp = "";
        dfs(root, res, temp);
        return res;
    }
};

int main() {
    return 0;
}