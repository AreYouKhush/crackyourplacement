#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mpp;
        for(auto it: strs) {
            string temp = it;
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(it);
        }
        for(auto it: mpp) {
            res.push_back(it.second);
        }
        return res;
    }
};

int main() {
    return 0;
}