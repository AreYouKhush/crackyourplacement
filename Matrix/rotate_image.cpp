#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int left = 0, right = matrix.size() - 1;
        while(left < right){
        for(int i = 0; i < right - left; i++){
                int top = left, bottom = right;
                swap(matrix[top][left+i], matrix[top+i][right]);
                swap(matrix[top][left+i], matrix[bottom][right-i]);
                swap(matrix[top][left+i], matrix[bottom-i][left]);
            }
            right--;
            left++;
        }
    }
};

int main() {
    return 0;
}