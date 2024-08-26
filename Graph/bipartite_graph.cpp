#include<bits/stdc++.h>
using namespace std;

bool bfs(int curr, int currColor, vector<int>adj[], vector<int>&color){
    queue<int>q;
    q.push(curr);
    color[curr]=currColor;
    
    while(!q.empty()){
        int curr=q.front();
        int currColor=color[curr];
        q.pop();
        
        for(int &ngbr:adj[curr]){
            if(color[ngbr]==currColor) return 0;
            else if(color[ngbr]==-1){
                int ngbrColor=1-currColor;
                color[ngbr]=ngbrColor;
                q.push(ngbr);
            }
        }
    }
    return 1;
}

bool isBipartite(int V, vector<int>adj[]){
    // Code here
    vector<int>color(V, -1);
    
    for(int i=0; i<V; i++){
        if(color[i]==-1){
            if(bfs(i, 0, adj, color)==0){
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    return 0;
}