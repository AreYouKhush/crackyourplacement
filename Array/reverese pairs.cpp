#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int res = 0;
        int i = low, j = mid + 1;

        while(i <= mid && j <= high) {
            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }
        }

        while(i <= mid) temp.push_back(nums[i++]);
        while(j <= high) temp.push_back(nums[j++]);

        for(int k = low; k <= high; k++) {
            nums[k] = temp[k-low];
        }
    }

    int countPairs(vector<int>& nums, int low, int mid, int high) {
        int right = mid + 1;
        int res = 0;
        for(int i = low; i <= mid; i++) {
            long long int n = (long long int)nums[right] * 2;
            while(right <= high && nums[i] > n) {
                n = (long long int) nums[++right] * 2;
            }
            res += (right - (mid + 1));
        }
        return res;
    }

    int divide(vector<int>& nums, int low, int high) {
        int res = 0;
        if(low >= high) return res;
        int mid = (low + high)/2;
        res += divide(nums, low, mid);
        res += divide(nums, mid + 1, high);
        res += countPairs(nums, low, mid, high);
        merge(nums, low, mid, high);
        return res;
    }

    int reversePairs(vector<int>& nums) {
        return divide(nums, 0, nums.size() - 1);
    }
};

int main() {
    return 0;
}
