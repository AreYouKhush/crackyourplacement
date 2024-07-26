#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i: nums) pq.push(i);
        while(!pq.empty() && k != 1) {
            pq.pop();
            k--;
        }
        return pq.top();
    }
};

int main() {
    return 0;
}