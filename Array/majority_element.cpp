#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int num = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(num == nums[i]) {
                count++;
            } else {
                count--;
            }
            if(count == 0) {
                num = nums[i];
                count = 1;
            }
        }
        count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(num == nums[i]) count++;
        }
        if(count >= nums.size()/2) return num;
        return -1;
    }
};

int main() {
    return 0;
}