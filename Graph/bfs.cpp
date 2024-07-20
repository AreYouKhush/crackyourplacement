#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int> q;
        vector<int> vis(V, 0);
        q.push(0);
        vector<int> res;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            if(vis[node] != 1) res.push_back(node);
            vis[node] = 1;
            for(auto i: adj[node]) {
                if(vis[i] == 0) {
                    q.push(i);
                }
            }
        }
        return res;
    }
};

int main() {
    return 0;
}