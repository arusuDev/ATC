#include<iostream>
using namespace std;

int main(void){
    long long N,Y;
    cin >> N >> Y;
    // 10000円と5000円の枚数が決まれば自ずと1000円の枚数は決まるので
    // O(N^2)で結果が算出できる
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N-i;j++){
            if(10000*i+5000*j+1000*(N-i-j) == Y){
                cout << i << " " << j << " " << N-i-j << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}