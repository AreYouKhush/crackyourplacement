#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int sum = 0;
        int res = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum - k;
            if(mpp.find(rem) != mpp.end()) res += mpp[rem];
            mpp[sum]++;
        }
        return res;
    }
};

int main() {
    return 0;
}