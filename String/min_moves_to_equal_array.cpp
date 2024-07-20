#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums.size()/2;
        int changeTo = nums[mid];
        int res = 0;
        for(int i: nums) res += abs(i - changeTo);
        return res;
    }
};

int main() {
    return 0;
}