#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        unordered_map<int, int> mpp;
        for(int i: arr) mpp[i]++;
        for(int i: arr) {
            int rem = x + i;
            if(mpp.find(rem) != mpp.end()) {
                if(rem == i && mpp[rem] > 1) return 1;
                else if(rem != i) return 1;
            }
        }
        return -1;
    }
};

int main() {
    return 0;
}