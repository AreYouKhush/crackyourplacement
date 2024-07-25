#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int init) {
        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != init) return;
        image[sr][sc] = color;
        dfs(image, sr + 1, sc, color, init);
        dfs(image, sr - 1, sc, color, init);
        dfs(image, sr, sc + 1, color, init);
        dfs(image, sr, sc - 1, color, init);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image;
        int init = image[sr][sc];
        dfs(image, sr, sc, color, init);
        return image;
    }
};

int main() {
    return 0;
}