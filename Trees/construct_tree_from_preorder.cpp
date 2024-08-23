#include<bits/stdc++.h>
using namespace std;

int cur = 0; 
Node *solve(int pre[], char preLN[]){
    
    Node *temp = new Node(pre[cur]); 
    
    if ( preLN[cur] == 'N'){
        cur++; 
        temp->left = solve(pre,preLN);
        cur++;
        temp->right = solve(pre, preLN);
    }
    return temp;
}

struct Node *constructTree(int n, int pre[], char preLN[]){
    return solve(pre, preLN);
}

int main() {
    return 0;
}
