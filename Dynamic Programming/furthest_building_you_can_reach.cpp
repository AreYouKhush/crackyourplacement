#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int> p;
        int pos = 0, diff = 0;
        for(pos = 0; pos < h.size()-1; pos++){
            diff = h[pos+1] - h[pos];
            if(diff <= 0){
                continue;
            }
            b -= diff;
            p.push(diff);
            if(b<0){
                b+=p.top();
                p.pop();
                l--;
            }
            if(l < 0) break;
        }
        return pos;
    }
};

int main() {
    return 0;
}