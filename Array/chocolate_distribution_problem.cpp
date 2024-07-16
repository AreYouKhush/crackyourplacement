#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        int res = INT_MAX;
        for(int i = 0; i < a.size() && i + m - 1 < a.size(); i++) {
            int diff = a[i+m-1] - a[i];
            res = min(res, diff);
        }
        return res;
    }   
};

int main() {
    return 0;
}