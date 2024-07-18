#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool helper(vector<vector<char>>& board, int i, int j, string word, int w) {
        if(word.size() == w) return true;
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || word[w] != board[i][j]) return false;
        char temp = board[i][j];
        board[i][j] = '\0';
        if(helper(board, i+1, j, word, w+1) || helper(board, i, j+1, word, w+1)
        || helper(board, i-1, j, word, w+1) ||helper(board, i, j-1, word, w+1)) return true;
        board[i][j] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if(board[i][j] == word[0]) {
                    if(helper(board, i, j, word, 0)) return true;
                }
            }
        }
        return false;
    }
};

int main() {
    return 0;
}