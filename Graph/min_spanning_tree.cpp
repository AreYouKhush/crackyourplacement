#include<bits/stdc++.h>
using namespace std;

int spanningTree(int V, vector<vector<int>> adj[]){
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    queue<int> q;
    q.push(0);
    vector<int> vis(V, 0);
    pq.push({0, {0, -1}});
    
    int res = 0;
    
    while(!q.empty()) {
        int parent = q.front();
        q.pop();
        
        for(auto nodes: adj[parent]) {
            pq.push({nodes[1], {nodes[0], parent}});
        }
        
        while(!pq.empty() && vis[pq.top().second.first]) {
            pq.pop();
        }
        if(!pq.empty()) {
            vis[pq.top().second.first] = 1;
            res += pq.top().first;
            q.push(pq.top().second.first);
        }
    }
    
    return res;
}

int main() {
    return 0;
}