#include <bits/stdc++.h>
using namespace std;

vector<int> compareTriplets(const vector<int>& a, const vector<int>& b) {
    int alice = 0, bob = 0;

    for (int i = 0; i < 3; ++i) {
        if (a[i] > b[i]) ++alice;
        else if (a[i] < b[i]) ++bob;
    }

    return {alice, bob};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(3), b(3);
    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;

    auto result = compareTriplets(a, b);
    cout << result[0] << ' ' << result[1] << '\n';

    return 0;
}
