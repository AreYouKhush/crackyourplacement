#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<vector<int>> perm;
        sort(arr.begin(),arr.end());
        do{
            perm.push_back(arr);
        } while (next_permutation(arr.begin(),arr.end()));
        
        return perm;
    }
};

int main() {
    return 0;
}