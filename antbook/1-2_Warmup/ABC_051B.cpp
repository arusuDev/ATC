#include <iostream>
using namespace std;

int main(void){
    int K,S;
    cin >> K >> S;
    int count=0;

    // iとjを全探索して、0以上K以下にZを設定すれば条件を満たすパターンを数える
    for(int i=0;i<=K;i++)
        for(int j=0;j<=K;j++)
            if(S-i-j <= K && S-i-j >= 0)
                count++;
    cout << count << endl;
    return 0;
}