#include<bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }
    
    int sumRange(int left, int right) {
        long long ans = 0;
        for(int i = left; i <= right; i++) {
            ans += nums[i];
        }
        return ans;
    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

int main() {
    return 0;
}