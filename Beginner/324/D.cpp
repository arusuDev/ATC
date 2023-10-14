#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <cmath>
#include <set>
using namespace std;

int main(void){
    long long N;
    string S;
    set<long long> ans;
    cin >> N >> S;
    
    std::vector<int> arr(N);
    for (int i = 0; i < N; ++i)
    {
        arr[i] = i;
    }
    // 愚直な実装(std::next_permutation(arr.begin(), arr.end())で順列を生成し、
    // 生成した値全てに対して計算を行う)
    // 13!が間に合うわけもなく…
    do
    {
        string num;
        for (int i = 0; i < N; ++i)
        {
            num += S[arr[i]];
        }

        long long n = stoll(num);
        long long sq = sqrt(n);
        if(sq*sq == n){
            ans.insert(n/sq);
        }
    } while (std::next_permutation(arr.begin(), arr.end()));
    cout << ans.size() << endl;
    return 0;
}