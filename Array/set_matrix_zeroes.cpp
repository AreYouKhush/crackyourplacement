#include<bits/stdc++.h>
using namespace std;

// Space Unoptimized
class Solution1 {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows(matrix.size(), 1);
        vector<int> cols(matrix[0].size(), 1);

        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    rows[i] = 0;
                    cols[j] = 0;
                }
            }
        }

        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(cols[j] == 0 || rows[i] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// Space Optimized
class Solution2 {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int col00 = matrix[0][0];
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == 0){
                    if(j != 0){
                        matrix[0][j] = 0;
                    }else{
                        col00 = 0;
                    }
                    matrix[i][0] = 0;
                }
            }
        }

        for(int i = 1; i < rows; i++){
            for(int j = 1; j < cols; j++){
                if(matrix[i][j] != 0){
                    //check for col & row
                    if(matrix[0][j] == 0 || matrix[i][0] == 0){
                        matrix[i][j] = 0;
                    }   
                }
            }
        }

        if(matrix[0][0] == 0){
            for(int j = 0; j < cols; j++) matrix[0][j] = 0;
        }

        if(col00 == 0){
            for(int i = 0; i < rows; i++) matrix[i][0] = 0;
        }
    }
};

class Solution3 {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int mrow = matrix[0][0];
        int mcol = matrix[0][0];
        for(int i = 1; i < matrix.size(); i++) {
            if(matrix[i][0] == 0) mrow = 0;
        }
        for(int j = 1; j < matrix[0].size(); j++) {
            if(matrix[0][j] == 0) mcol = 0;
        }
        for(int i = 1; i < matrix.size(); i++) {
            for(int j = 1; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for(int i = 1; i < matrix.size(); i++) {
            for(int j = 1; j < matrix[0].size(); j++) {
                if(matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        if(mrow == 0 || mcol == 0) {
            if(mrow == 0) {
                for(int i = 0; i < matrix.size(); i++) {
                    matrix[i][0] = 0;
                }
            }
            if(mcol == 0) {
                for(int j = 0; j < matrix[0].size(); j++) {
                    matrix[0][j] = 0;
                }
            }
        }
    }
};

int main() {
    return 0;
}