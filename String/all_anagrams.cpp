#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        unordered_map<string, vector<string>> mpp;
        for(auto i: string_list) {
            string temp = i;
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(i);
        }
        vector<vector<string>> res;
        for(auto it: mpp) {
            res.push_back(it.second);
        }
        return res;
    }
};

int main() {
    return 0;
}