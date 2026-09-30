#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(const vector<vector<int>>& arr) {
    int n = arr.size();
    long long primary = 0, secondary = 0;

    for (int i = 0; i < n; ++i) {
        primary += arr[i][i];
        secondary += arr[i][n - 1 - i];
    }

    return static_cast<int>(llabs(primary - secondary));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    for (auto& row : arr)
        for (int& x : row)
            cin >> x;

    cout << diagonalDifference(arr) << '\n';
    return 0;
}
