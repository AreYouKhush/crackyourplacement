#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> temp(board.size(), vector<int>(board[0].size(), 0));
        vector<vector<int>> dir = {{0,1}, {0,-1}, {1,0}, {-1,0}, {1,1}, {1,-1}, {-1,1}, {-1,-1}};
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                int live = 0;
                for(auto it: dir) {
                    int r = i + it[0];
                    int c = j + it[1];
                    if(r < 0 || r >= board.size() || c < 0 || c >= board[0].size()) continue;
                    if(board[r][c] == 1) live++;
                }
                if(board[i][j] == 1) {
                    if(live < 2 || live > 3) temp[i][j] = 0;
                    else if(live == 2 || live == 3) temp[i][j] = 1;
                } else {
                    if(live == 3) temp[i][j] = 1;
                }
            }
        }
        board = temp;
    }
};

int main() {
    return 0;
}