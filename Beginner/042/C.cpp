// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    string N;
    int    K;
    cin >> N >> K;
    vector<char> D(K);
    for(int i=0;i<K;i++)
        cin >> D[i];
    sort(D.begin(),D.end());
    for(int i=N.size()-1;i>=0;i--){
        //1のくらいから順に見てゆく。
        int st=-1;//同じ数字があった場合ループの開始地点。
        bool ct=false;//繰り上がり
        for(int j=0;j<K;j++){
            if(N[i] == D[j]){
                st = j;
                break;
            }
        }
        if(st == -1){
            continue;
        }
        for(int j=st;j==st-1;j=(j+1)%K){
            if(N[i] == D[j] && N[i]!='9'){
                N[i] = N[i] + 1;
            }else if(N[i == D[j] && N[i] == '9']){
                ct = true;
                N[i] = '0';
            }else{
                break;
            }
        }
        if(i-1 != -1){
            if(N[i] == D[j])
        }
    }
    cout << N;
}