#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i: nums) cout<<i<<" ";
        cout<<endl;
        for(int i = 0; i < nums.size() - 2; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i + 1, k = nums.size() - 1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0) {
                    j++;
                } else if (sum > 0){
                    k--;
                } else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(k >= 0 && nums[k] == nums[k+1]) k--;
                    while(j < nums.size() && nums[j] == nums[j-1]) j++;
                }
            }
        }
        return res;
    }
};

int main() {
    return 0;
}