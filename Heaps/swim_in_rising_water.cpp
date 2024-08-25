#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        priority_queue<vector<int>> pq;
        pq.push({-grid[0][0], 0, 0});
        set<pair<int, int>> vis;
        vis.insert({0,0});

        vector<vector<int>> directions = {{0,1}, {0,-1}, {1,0}, {-1,0}};

        while(!pq.empty()) {
            int wave = -pq.top()[0];
            int r = pq.top()[1];
            int c = pq.top()[2];
            pq.pop();

            if(r == grid.size()-1 && c == grid[0].size()-1) return wave;

            for(auto dir: directions) {
                int nr = dir[0] + r;
                int nc = dir[1] + c;
                if(nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size() && vis.find({nr, nc}) == vis.end()) {
                    vis.insert({nr, nc});
                    int maxwave = max(grid[nr][nc], wave);
                    pq.push({-maxwave, nr, nc});
                }
            }

        }
        return -1;
    }
};

int main() {
    return 0;
}