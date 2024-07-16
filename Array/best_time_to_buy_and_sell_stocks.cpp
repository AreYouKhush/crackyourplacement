#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minval = INT_MAX;
        int maxProf = 0;
        for(int i = 0; i < nums.size(); i++) {
            minval = min(minval, nums[i]);
            maxProf = max(maxProf, nums[i] - minval);
        }
        return maxProf;
    }
};

int main() {
    return 0;
}