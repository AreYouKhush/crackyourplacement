#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0, k = nums.size() - 1;
        while(j <= k) {
            switch(nums[j]) {
                case 0:
                    swap(nums[i], nums[j]);
                    i++;
                    j++;
                    break;
                case 1:
                    j++;
                    break;
                case 2:
                    swap(nums[j], nums[k]);
                    k--;
            }
        }
    }
};

int main() {
    vector<int> nums = {0,1,2,0,1,2,2,1,2,1,1};
    Solution sol = Solution();
    sol.sortColors(nums);
    for(auto it: nums) cout<<it<<" ";
    return 0;
}