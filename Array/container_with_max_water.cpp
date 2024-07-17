#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int maxWater = INT_MIN;
        while(i < j) {
            maxWater = max(min(height[i], height[j]) * (j - i), maxWater);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return maxWater;
    }
};

int main() {
    return 0;
}