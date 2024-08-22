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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        bool zigzag = false;
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        vector<int> level;
        if(root != nullptr){
            q.push(root);
            q.push(NULL);
        } 

        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL){
                if(zigzag == true) reverse(level.begin(), level.end());
                ans.push_back(level);
                level.clear();
                if(!q.empty()) q.push(NULL);
                zigzag = !zigzag;
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