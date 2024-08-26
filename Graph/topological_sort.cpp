#include<bits/stdc++.h>
using namespace std;

void kahn(int V, vector<int> adj[], int indegree[], queue<int> &q){ 
        queue<int> temp; 
         
        for(int i=0;i<V;i++){ 
            if(indegree[i]==0){ 
                temp.push(i); 
            } 
        } 
        while(!temp.empty()){ 
            int node= temp.front(); 
            temp.pop(); 
            q.push(node); 
             
            for(auto it:adj[node]){ 
                indegree[it]--; 
                 
                if(indegree[it]==0){ 
                    temp.push(it); 
                } 
            } 
        } 
    } 
     
 //Function to return list containing vertices in Topological order. 
 vector<int> topoSort(int V, vector<int> adj[]){ 
     int indegree[V]= {}; 
     std::queue<int> q ; 
      
     for(int i=0;i<V;i++){ 
         for(auto it: adj[i]){ 
             indegree[it]++; 
         }     
     } 
     kahn(V,adj,indegree,q); 
     vector<int> ans; 
     while(!q.empty()){ 
         ans.push_back(q.front()); 
         q.pop(); 
     } 
     return ans; 
 } 

int main() {
    return 0;
}