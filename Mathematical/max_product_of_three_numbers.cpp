#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int p1 = nums[0] * nums[1] * nums[2];
        int p2 = nums[0] * nums[1] * nums.back();
        int p3 = nums[0] * nums.back() * nums[nums.size() - 2];
        int p4 = nums.back() * nums[nums.size() - 2] * nums[nums.size() - 3];
        if(p1 > p2 && p1 > p3 && p1 > p4) return p1;
        else if(p2 > p1 && p2 > p3 && p2 > p4) return p2;
        else if(p3 > p1 && p3 > p2 && p3 > p4) return p3;
        return p4;
    }
};

int main() {
    return 0;
}