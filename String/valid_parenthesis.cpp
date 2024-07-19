#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto it: s) {
            if(it == '(' || it == '{' || it == '[') st.push(it);
            else if(st.size() != 0) {
                if(it == ')' && st.top() == '(') st.pop();
                else if(it == '}' && st.top() == '{') st.pop();
                else if(it == ']' && st.top() == '[') st.pop();
                else return false;
            } else return false;
        }
        if(st.size() == 0) return true;
        else return false;
    }
};

int main() {
    return 0;
}