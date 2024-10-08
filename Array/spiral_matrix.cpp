#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, left = 0, right = matrix[0].size() - 1, bottom = matrix.size() - 1;
        vector<int> res;
        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++) {
                res.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top; i <= bottom; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;
            if(top <= bottom) {
                for(int i = right; i >= left; i--) {
                    res.push_back(matrix[bottom][i]);
                }
            }
            bottom--;
            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    res.push_back(matrix[i][left]);
                }
            }
            left++;
            cout<<top<<" "<<right<<" "<<bottom<<" "<<left<<endl;
        }
        return res;
    }
};

int main() {
    return 0;
}