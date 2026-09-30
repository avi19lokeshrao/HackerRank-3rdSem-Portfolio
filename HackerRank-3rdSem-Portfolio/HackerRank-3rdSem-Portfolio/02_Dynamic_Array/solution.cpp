#include <bits/stdc++.h>
using namespace std;

vector<int> dynamicArray(int n, const vector<vector<int>>& queries) {
    vector<vector<int>> seqList(n);
    vector<int> answer;
    int lastAnswer = 0;

    for (const auto& q : queries) {
        int type = q[0], x = q[1], y = q[2];
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            seqList[idx].push_back(y);
        } else {
            lastAnswer = seqList[idx][y % seqList[idx].size()];
            answer.push_back(lastAnswer);
        }
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<vector<int>> queries(q, vector<int>(3));
    for (auto& query : queries)
        cin >> query[0] >> query[1] >> query[2];

    for (int x : dynamicArray(n, queries))
        cout << x << '\n';

    return 0;
}
