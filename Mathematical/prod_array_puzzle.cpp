#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        long long int prod = 1;
        int totzeroes = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) totzeroes++;
            else prod *= nums[i];
        }
        for(int i = 0; i < nums.size(); i++) {
            if(totzeroes > 1) nums[i] = 0;
            else if(totzeroes == 1) {
                if(nums[i] != 0) nums[i] = 0;
                else nums[i] = prod;
            } else {
                nums[i] = prod / nums[i];
            }
        }
        return nums;
    }
};

int main() {
    return 0;
}