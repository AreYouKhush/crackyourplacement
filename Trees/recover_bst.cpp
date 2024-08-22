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

    void inorder(vector<int>& inord, TreeNode* root) {
        if(root == nullptr) return;
        
        inorder(inord, root->left);
        inord.push_back(root->val);
        inorder(inord, root->right);
    }

    void correct(vector<int>& inord, TreeNode* root, int& ind){
        if(root == nullptr) return;

        correct(inord, root->left, ind);
        if(root->val != inord[ind]){
            root->val = inord[ind];
        };
        ind++;
        correct(inord, root->right, ind);
    }

    void recoverTree(TreeNode* root, long long lb = LLONG_MIN, long long ub = LLONG_MAX) {
        vector<int> inord;
        inorder(inord, root);
        sort(inord.begin(), inord.end());
        int ind = 0;
        correct(inord, root, ind);
    }
};

int main() {
    return 0;
}