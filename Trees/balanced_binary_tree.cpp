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

    int height(TreeNode* root){
        if(root == nullptr) return 0;

        int lh = height(root->left);
        if(lh == -1) return -1;
        int rh = height(root->right);
        if(rh == -1) return -1;


        if(abs(lh - rh) > 1) return -1;

        return max(lh, rh) + 1;
    }

    bool isBalanced(TreeNode* root) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        return height(root) != -1;
    }
};

int main() {
    return 0;
}