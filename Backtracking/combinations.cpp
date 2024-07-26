#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(int n, int k, vector<int>& nums, vector<vector<int>>& res, vector<int>& cur, int ind) {
        if(ind >= nums.size()) return;
        if(cur.size() == k) {
            res.push_back(cur);
            return;
        }
        cur.push_back(nums[ind]);
        helper(n, k, nums, res, cur, ind + 1);
        cur.pop_back();
        helper(n, k, nums, res, cur, ind + 1);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        for(int i = 0; i <= n; i++) nums.push_back(i+1);
        vector<vector<int>> res;
        vector<int> cur;
        helper(n, k, nums, res, cur, 0);
        return res;
    }
};

int main() {
    return 0;
}