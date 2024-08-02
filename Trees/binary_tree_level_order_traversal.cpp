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
    vector<vector<int>> levelOrder(TreeNode* root) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<int>> ans;
        vector<int> level;
        queue<TreeNode*> q;
        if(root != nullptr){
            q.push(root);
            q.push(NULL);
        }
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL){
                ans.push_back(level);
                level.clear();
                if(!q.empty()) q.push(NULL);
            }else{
                level.push_back(temp->val);
                if(temp->left != nullptr) q.push(temp->left);
                if(temp->right != nullptr) q.push(temp->right);
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}