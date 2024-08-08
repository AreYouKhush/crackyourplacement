#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        if(!height.size()) return 0;
        int l = 0, r = height.size() - 1;
        int maxL = height[l];
        int maxR = height[r];
        int water = 0;
        while(l < r){
            if(maxL > maxR){
                r--;
                maxR = max(maxR, height[r]);
                water += maxR - height[r];
            }else if(maxL <= maxR){
                l++;
                maxL = max(maxL, height[l]);
                water += maxL - height[l];
            }
        }
        return water;
    }
};

int main() {
    return 0;
}