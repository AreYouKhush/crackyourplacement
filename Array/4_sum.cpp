#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4) return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < nums.size() - 3; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i + 1; j < nums.size() - 2; j++) {
                if(j > i + 1 &&nums[j] == nums[j-1]) continue;
                int k = j + 1, l = nums.size() - 1;
                while(k < l) {
                    long long int sum = (long long int)nums[i] + (long long int)nums[j] + (long long int)nums[k] + (long long int)nums[l];
                    if(sum < target) {
                        k++;
                    } else if(sum > target) {
                        l--;
                    } else {
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        while(k < l && nums[k] == nums[k-1]) k++;
                        while(k < l && nums[l] == nums[l+1]) l--;
                    }   
                }
            }
        }
        return res;
    }
};

int main() {
    return 0;
}