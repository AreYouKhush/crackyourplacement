#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        while(j != nums.size()){
            if(nums[i] != 0){
                i++;
                j = i;
            }else{
                if(nums[j] != 0){
                    swap(nums[i], nums[j]);
                    i++;
                    j++;
                }else{
                    j++;
                }
            }
        }
    }
};

int main() {
    return 0;
}