#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        string ans = "";
        for(auto c: num){
            while(k > 0 && ans.size() && ans[ans.size()-1] > c){
                k--;
                ans.pop_back();
            }
            if(ans.size() || c != '0'){
                ans.push_back(c);
            }
        }
        while(k-- && ans.size()){
             ans.pop_back();
        }
        return ans.size() ? ans : "0";
    }
};

int main() {
    return 0;
}