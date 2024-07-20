#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(string s, string t, int i, int j, vector<vector<int>>& dp) {
        if(j == t.size()) return 1;
        if(i >= s.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        int take = 0;
        if(s[i] == t[j]) take = helper(s, t, i+1, j+1, dp);
        int nottake = helper(s, t, i+1, j, dp);

        return dp[i][j] = take + nottake;
    }

    int numDistinct(string s, string t) {
        vector<vector<int>> dp(s.size(), vector<int>(t.size(), -1));
        return helper(s, t, 0, 0, dp);
    }
};

int main() {
    return 0;
}