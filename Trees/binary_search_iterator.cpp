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

class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        inorderTraversal(root);
    }
    int next() {
        int val = nodes.front();
        nodes.pop_front();
        return val;
    }
    bool hasNext() {
        return !nodes.empty();
    }
private:
    std::deque<int> nodes;
    
    void inorderTraversal(TreeNode* node) {
        if (!node) return;
        inorderTraversal(node->left);
        nodes.push_back(node->val);
        inorderTraversal(node->right);
    }
};

int main() {
    return 0;
}