#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs(int V, vector<int> adj[], vector<int>& res, vector<int>& vis, int node) {
        vis[node] = 1;
        res.push_back(node);
        for(auto i: adj[node]) {
            if(vis[i] == 0) {
                dfs(V, adj, res, vis, i);
            }
        }
    }
  
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> res;
        vector<int> vis(V, 0);
        dfs(V, adj, res, vis, 0);
        return res;
    }
};

int main() {
    return 0;
}