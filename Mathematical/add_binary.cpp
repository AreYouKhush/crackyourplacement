#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string ab = "";
        char carry = '0';
        int i = a.size()-1, j = b.size()-1;
        while(i >= 0 && j >= 0) {
            if(a[i] == b[j] && a[i] == '1') {
                if(carry == '1') {
                    ab.push_back('1');
                } else {
                    carry = '1';
                    ab.push_back('0');
                }
            } else if(a[i] == b[j] && a[i] == '0') {
                if(carry == '1') {
                    carry = '0';
                    ab.push_back('1');
                } else {
                    ab.push_back('0');
                }
            } else {
                if(carry == '1') {
                    carry = '1';
                    ab.push_back('0');
                } else {
                    ab.push_back('1');
                }
            }
            i--;
            j--;
        }
        while(i >= 0) {
            if(carry == '1') {
                if(a[i] == '1') {
                    ab.push_back('0');
                    carry = '1';
                } else {
                    ab.push_back('1');
                    carry = '0';
                }
            } else {
                ab.push_back(a[i]);
            }
            i--;
        }
        while(j >= 0) {
            if(carry == '1') {
                if(b[j] == '1') {
                    ab.push_back('0');
                    carry = '1';
                } else {
                    ab.push_back('1');
                    carry = '0';
                }
            } else {
                ab.push_back(b[j]);
            }
            j--;
        }
        if(carry == '1') ab.push_back(carry);
        reverse(ab.begin(), ab.end());
        return ab;
    }
};

int main() {
    return 0;
}