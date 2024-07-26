#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(int i: nums) mpp[i]++;
        priority_queue<pair<int, int>> pq;
        for(auto it: mpp) {
            pq.push({it.second, it.first});
        }
        vector<int> ans;
        while(!pq.empty() && k != 0) {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};

int main() {
    return 0;
}