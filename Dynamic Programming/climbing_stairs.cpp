#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int prev2 = 0;
        int prev1 = 1;
        for(int i = 1; i <= n; i++) {
            int k = prev1 + prev2;
            prev2 = prev1;
            prev1 = k;
        }
        return prev1;
    }
};

int main() {
    return 0;
}