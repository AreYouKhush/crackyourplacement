#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
  int ans;
  void solve(int i,int parent,vector<int> adj[],vector<bool> &vis){
      if(vis[i] ){
          ans = 1;
          return;
      }
      vis[i]=1;
      for(auto it: adj[i]){
          if(it!=parent){
              solve(it,i,adj,vis);
          }
      }
    //   return false;
  } 
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // vector<int> ans;
        vector<bool> vis(V,0);
        int parent=-1;
        for(int i=0;i<V;i++){
            if(!vis[i]){
               solve(i,parent,adj,vis);
            }
        }
        if(ans==1)return true;
        return false;
    }
};

int main() {
    return 0;
}