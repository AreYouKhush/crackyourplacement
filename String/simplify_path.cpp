#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        int i = 0;
        while(i < path.size()) {
            while(i < path.size() && path[i] == '/') {
                i++;
            }
            string s = "";
            while(i < path.size() && ((path[i] >= 'a' && path[i] <= 'z') || (path[i] >= 'A' && path[i] <= 'Z') || path[i] == '_' || path[i] == '.' || (path[i] >= '0' && path[i] <= '9'))) {
                s.push_back(path[i]);
                i++;
            }
            cout<<s<<" ";
            if(s == "..") {
                if(st.size() != 0)
                    st.pop_back();
            } else if(s != ".") st.push_back(s);
            i++;
        }
        if(st.size() == 0) return "/";
        string res = "";
        for(auto it: st) {
            res.push_back('/');
            res += it;
        }
        if(res.back() == '/' && res.size() != 1) res.pop_back();
        return res;
    }
};

int main() {
    return 0;
}