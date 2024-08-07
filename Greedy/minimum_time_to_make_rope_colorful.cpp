#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(string s, vector<int>& v) {
        int mincost = 0;
        int n = s.size();

        for (int i = 1; i < n;) {
            if (s[i] != s[i - 1]) {
                i++;
            } else {
                int sum = v[i - 1];
                int maxi = v[i - 1];
                
                while (s[i] == s[i - 1]) {
                    sum = sum + v[i];
                    maxi = max(v[i], maxi);
                    i++;
                }
                mincost += (sum - maxi);
            }
        }
        return mincost;
    }
};

int main() {
    return 0;
}