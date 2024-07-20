#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        for(char c: s) {
            if(c == '#' && s1.size() != 0) s1.pop();
            else if(c != '#') s1.push(c);
        }
        for(char c: t) {
            if(c == '#' && s2.size() != 0) s2.pop();
            else if(c != '#') s2.push(c);
        }
        while(!s1.empty() && !s2.empty()) {
            if(s1.top() != s2.top()) return false;
            s1.pop();
            s2.pop();
        }
        return s1.size() == s2.size();
    }
};

int main() {
    return 0;
}