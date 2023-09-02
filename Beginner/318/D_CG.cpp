#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> D(N, vector<int>(N));
    for (int i = 1; i < N; i++) {
        for (int j = i + 1; j <= N; j++) {
            cin >> D[i - 1][j - 1];
            D[j - 1][i - 1] = D[i - 1][j - 1];
        }
    }

    // 各頂点について、その頂点に接続する辺の中から1つだけ選ぶ
    // その時の重みの和が最大となる組み合わせを探す
    int max_weight = 0;
    vector<int> selected(N);
    for (int i = 0; i < N; i++) {
        selected[i] = i;
    }
    do {
        int weight = 0;
        for (int i = 0; i < N; i++) {
            weight += D[i][selected[i]];
        }
        max_weight = max(max_weight, weight);
    } while (next_permutation(selected.begin(), selected.end()));

    cout << max_weight << endl;

    return 0;
}
