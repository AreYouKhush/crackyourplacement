#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) return strs[0];
        string res = "";
        for(int i = 0; i < strs[0].size(); i++) {
            int cnt = 1;
            for(int j = 1; j < strs.size(); j++) {
                if(strs[j][i] == strs[0][i]) cnt++;
                else return res;
            }
            if(cnt == strs.size()) res.push_back(strs[0][i]);
        }
        return res;
    }
};

int main() {
    return 0;
}