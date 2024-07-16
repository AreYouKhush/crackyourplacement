#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        while(nums[i] != -1) {
            int temp = nums[i];
            nums[i] = -1;
            i = temp;
        }
        return i;
    }
};

int main() {
    vector<int> inp = {1,2,4,5,1};
    Solution sol =  Solution();
    cout<<sol.findDuplicate(inp);
    return 0;
}