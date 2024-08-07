#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void combinations(vector<int> &nums, int index, vector<int> &cur, vector<vector<int>> &ans) {
        ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        if(index == nums.size()) {
            ans.push_back(cur);
            return;
        }

        combinations(nums, index + 1, cur, ans);
        cur.push_back(nums[index]);
        combinations(nums, index + 1, cur, ans);
        cur.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n = nums.size();
        vector<vector<int>> subsetsv;
        vector<int> cur;
        combinations(nums, 0, cur, subsetsv);
        return subsetsv;
    }
};

int main() {
    return 0;
}