#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minTotalCost(vector<int>& A, int B) {
    int N = A.size();
    vector<int> minCost(N, INT_MAX);
    long long ans = LLONG_MAX;

    // Try all possible number of rotations
    for (int rot = 0; rot < N; ++rot) {
        long long currentCost = 1LL * rot * B;

        for (int i = 0; i < N; ++i) {
            // index after `rot` left rotations
            int idx = (i + rot) % N;
            // update min cost for this slot
            minCost[i] = min(minCost[i], A[idx]);
            currentCost += minCost[i];
        }

        ans = min(ans, currentCost);
    }

    return ans;
}

int main() {
    // Example 1:
    vector<int> A = {7, 4, 2, 1};
    int B = 3;

    // Example 2:
    // vector<int> A = {1, 10, 10};
    // int B = 1;

    cout << minTotalCost(A, B) << endl;

    return 0;
}
