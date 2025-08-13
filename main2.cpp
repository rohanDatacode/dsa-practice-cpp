#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSquareArea(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return 0;
    int m = matrix[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, 0));
    int maxSide = 0;

    // Fill the dp matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = matrix[i][j];  // First row or column
            } else if (matrix[i][j] == 1) {
                dp[i][j] = min({ dp[i-1][j], dp[i][j-1], dp[i-1][j-1] }) + 1;
            }
            maxSide = max(maxSide, dp[i][j]);
        }
    }

    return maxSide * maxSide;
}

int main() {
    // Example Input 1
    vector<vector<int>> matrix = {
        {0, 1, 1, 0, 1},
        {1, 1, 0, 1, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0}
    };

    // Uncomment below for Example Input 2
    
    // vector<vector<int>> matrix = {
    //     {1, 1},
    //     {1, 1}
    // };
    

    int area = maxSquareArea(matrix);
    cout << "Maximum square sub-matrix area is: " << area << endl;

    return 0;
}
