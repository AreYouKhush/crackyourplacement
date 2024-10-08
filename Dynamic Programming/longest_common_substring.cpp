#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int maxs = 0;
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(S1[i-1] == S2[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                maxs = max(maxs, dp[i][j]);
            }
        }
        return maxs;
    }
};

int main() {
    return 0;
}