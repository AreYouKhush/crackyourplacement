#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    }
    // reverse topological sort
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> reverseGraph(n);
        vector<int> indegree(n, 0);
        for(int i = 0; i < n; i++) {
            for(auto it: graph[i]) {
                reverseGraph[it].push_back(i);
                indegree[i]++;
            }
        }

        queue<int> q;
        for(int i = 0; i < n; i++) {
            if(indegree[i] == 0) q.push(i);
        }

        vector<int> topo;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it: reverseGraph[node]) {
                indegree[it]--;
                if(indegree[it] == 0) q.push(it);
            }
        }
        sort(topo.begin(), topo.end());
        return topo;
    }
};

int main() {
    return 0;
}