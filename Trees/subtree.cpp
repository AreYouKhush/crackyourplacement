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

    void dfs(TreeNode* root, vector<int>& pre) {
        if(root == nullptr) {
            pre.push_back(INT_MIN);
            return;
        }
        pre.push_back(root->val);
        dfs(root->left, pre);
        dfs(root->right, pre);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector<int> rootpre;
        vector<int> subpre;
        dfs(root, rootpre);
        dfs(subRoot, subpre);
        for(int i = 0; i < rootpre.size(); i++) {
            if(rootpre[i] == subpre[0]) {
                int j = i+1, k = 1;
                for(; k < subpre.size() && j < rootpre.size(); k++, j++) {
                    if(rootpre[j] != subpre[k]) break;
                }
                if(k == subpre.size()) return true;
            }
        }
        return false;
    }
};

int main() {
    return 0;
}