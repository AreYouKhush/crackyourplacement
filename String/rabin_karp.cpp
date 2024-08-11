#include<bits/stdc++.h>
using namespace std;

// LC :- 686
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int rep = ceil(b.size()/(float)a.size()) + 1;
        
        string newString;
        for(int i = 0; i < rep; i++) newString += a;
        
        int i = 0;
        while(i < newString.size()) {
            if(b == newString.substr(i, b.size())) {
                if( ceil((i + b.size())/(float)a.size()) >= rep) return rep;
                else return rep - 1;
            }
            i++;
        }
        return -1;
    }
};

int main() {
    return 0;
}