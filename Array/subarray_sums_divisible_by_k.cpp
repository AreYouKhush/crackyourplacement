#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 0;
        int sum = 0;
        int res = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < 0) sum += (k - abs(nums[i] % k));
            else sum += nums[i];
            int rem = sum % k;
            if(mpp.find(rem) != mpp.end()) mpp[rem]++;
            res += mpp[rem];
        }
        return res;
    }
};

int main() {
    return 0;
}