#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxS = INT_MIN;
        int currentS = 0;
        int i = 0, j = cardPoints.size() - 1;
        for(i = 0; i < k; i++) {
            currentS += cardPoints[i];
        }
        i--;
        maxS = max(maxS, currentS);
        if(i + 1 >= cardPoints.size()) return maxS;
        while(i >= 0 && j >= 0) {
            currentS = currentS - cardPoints[i] + cardPoints[j];
            maxS = max(maxS, currentS);
            i--;
            j--;
        }
        return maxS;
    }
};

int main() {
    return 0;
}