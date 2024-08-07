#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minInsertions(string s) {
        ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<int> prev(s.size()+1, 0);
        string t = "";
        for(int i = s.size()-1; i >= 0; i--) t.push_back(s[i]);

        for(int i = 1; i <= s.size(); i++) {
            vector<int> cur(s.size()+1, 0);
            for(int j = 1; j <= s.size(); j++) {
                if(s[i-1] == t[j-1]) cur[j] = prev[j-1] + 1;
                else cur[j] = max(prev[j], cur[j-1]);
            }
            prev = cur;
        }

        return s.size() - prev[s.size()];
    }
};

int main() {
    return 0;
}