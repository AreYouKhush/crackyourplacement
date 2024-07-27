#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int evaluatePostfix(string S){
        stack<int> st;
        for(int i = 0; i < S.size(); i++) {
            if(S[i] >= '0' && S[i] <= '9') {
                st.push(S[i] - '0');
            } else {
                int res;
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                switch(S[i]) {
                    case '+':
                        res = a + b;
                        break;
                    case '-':
                        res = b - a;
                        break;
                    case '*':
                        res = a * b;
                        break;
                    case '/':
                        res = b/a;
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