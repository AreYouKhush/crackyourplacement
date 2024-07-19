#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string ans ="";
        int j = 0;
        int i = 0;
        while(j < s.size()) {
            string temp = "";
            if(s[i] == ' '){
                j++;
                i++;
            }else{
                while(j < s.size() && s[j] != ' '){
                    temp += s[j];
                    j++;
                }
                if(temp.size()){
                    reverse(temp.begin(), temp.end());
                    ans += temp + " ";
                }
                i++;
            }
        }
        if(ans.size() > 0) ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    return 0;
}