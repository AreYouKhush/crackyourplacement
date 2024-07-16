#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();
        int i = 0, j = 1;
        while(j < nums.size()) {
            while(j < nums.size() && nums[i] == nums[j]) {
                j++;
            }
            i++;
            if(i < nums.size() && j < nums.size()) nums[i] = nums[j];
        }
        return i;
    }
};

int main() {
    vector<int> nums = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6};
    Solution obj = Solution();
    int res = obj.removeDuplicates(nums);
    for(int i = 0; i < res; i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}