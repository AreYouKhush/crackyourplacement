#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isValid(string s, int i, int j) {
        while(i <= j) {
            if(s[i] == s[j]) {
                i++;
                j--;
            } else return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        int flag = false;
        while(i <= j) {
            if(s[i] == s[j]) {
                i++;
                j--;
            } else if(flag == false) {
                flag = true;
                if(isValid(s, i, j-1) || isValid(s, i+1, j)) return true;
                else return false;
            } else {
                return false;
            }
        }
        return true;
    }
};

int main() {
    return 0;
}