#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<char> op;
        vector<string> postfix;
        for(int i = 0; i < s.size(); i++) {
            string temp = "";
            if(s[i] == ' ' || (s[i] >= '0' && s[i] <= '9')) {
                while(i < s.size() && (s[i] >= '0' && s[i] <= '9') || s[i] == ' ') {
                    if(s[i] == ' ') {
                        i++;
                        continue;
                    }
                    temp.push_back(s[i]);
                    i++;
                };
                i--;
                postfix.push_back(temp);
            } else {
                if(op.empty()) op.push(s[i]);
                else if(s[i] == '+' || s[i] == '-') {
                    while(!op.empty() && (op.top() == '*' || op.top() == '/' || op.top() == '+' || op.top() == '-')) {
                        temp.push_back(op.top());
                        op.pop();
                        postfix.push_back(temp);
                        temp = "";
                    }
                    op.push(s[i]);
                } else {
                    while(!op.empty() && (op.top() == '*' || op.top() == '/')) {
                        temp.push_back(op.top());
                        op.pop();
                        postfix.push_back(temp);
                        temp = "";
                    }
                    op.push(s[i]);
                }
            }
        }
        while(!op.empty()) {
            string temp;
            temp.push_back(op.top());
            op.pop();
            postfix.push_back(temp);
        }
        stack<int> nums;
        for(auto it: postfix) {
            if(it[0] == '+' || it[0] == '-' || it[0] == '*' || it[0] == '/') {
                int a = nums.top();
                nums.pop();
                int b = nums.top();
                nums.pop();
                int res;
                switch(it[0]) {
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
                        res = b / a;
                }
                nums.push(res);
            } else {
                nums.push(stoi(it));
            }
        }
        return nums.top();
    }
};

int main() {
    return 0;
}