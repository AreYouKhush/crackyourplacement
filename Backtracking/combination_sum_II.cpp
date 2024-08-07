#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(vector<int>& candidates, vector<vector<int>>& res, vector<int>& temp, int i, int target) {
        if(target == 0) {
            res.push_back(temp);
            return;
        }
        for(int ind = i; ind < candidates.size(); ind++){
            if(ind > i && candidates[ind] == candidates[ind - 1]) continue;
            if(candidates[ind] > target) break;

            temp.push_back(candidates[ind]);
            backtrack(candidates, res, temp, ind+1, target-candidates[ind]);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        int sum = 0;
        backtrack(candidates, res, temp, 0, target);
        return res;   
    }
};

int main() {
    return 0;
}