#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    vector<long long> A(N), B(M);

    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < M; i++) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // 二分探索の初期値
    long long left = 1, right = B[M-1]+2;

    while(right - left > 1) {
        long long X = (left + right) / 2;

        // 売り手でX円以上のりんごを売ろうとする人の数を求める
        long long sel = N - (lower_bound(A.begin(), A.end(), X) - A.begin());
        // 買い手でX円以下で買おうとする人の数を求める
        long long buy = upper_bound(B.begin(), B.end(), X) - B.begin();

        // cout << sel << " : " << buy << endl;
        if(sel >= buy) {
            left = X;
        } else {
            right = X;
        }
    }
    // if(A[0] > B[B.size()-1]){
    //     cout << B[B.size()-1]+1 << endl;
    // }else{
        cout << left << endl;
    // }

    return 0;
}