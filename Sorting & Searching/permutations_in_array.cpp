#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        vector<long long> aa;
        for(int i = 0; i < n; i++) aa.push_back(a[i]);
        vector<long long> bb;
        for(int i = 0; i < n; i++) bb.push_back(b[i]);
        sort(aa.begin(), aa.end());
        sort(bb.begin(), bb.end(), greater<int>());
        
        for(int i = 0; i < n; i++) {
            if(aa[i] + bb[i] < k) return false;
        }
        return true;
    }
};

int main() {
    return 0;
}