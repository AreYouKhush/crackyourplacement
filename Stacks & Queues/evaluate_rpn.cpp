#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++) {
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                st.push(stoi(tokens[i]));
            } else {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int res = 0;
                if(tokens[i] == "+") {
                    res = b + a;
                } else if(tokens[i] == "-") {
                    res = b - a;
                } else if(tokens[i] == "*") {
                    res = b * a;
                } else {
                    res = b / a;
                }
                st.push(res);
            }
        }
        return st.top();
    }
};

int main() {
    return 0;
}