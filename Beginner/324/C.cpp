#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    string T;
    cin >> N >> T;
    vector<string> S(N);
    for(auto &s:S)
        cin >> s;
    bool output = false;
    for(int i=0;i<N;i++){
        // 各文字列について判定
        // 1. 文字列の長さが等しい場合
        // cout << T << ":" << S[i] << endl;
        if(T.size() == S[i].size()){
            if(T == S[i]){
                cout << i+1 << " ";
                output = true;
                continue;;
            }
            // 4.一文字違う場合
            int count = 0;
            for(int j=0;j<T.size();j++){
                if(T[j] != S[i][j]){
                count++;
                    if(count == 2)
                        break;
                }
            }
            if(count == 1){
                output = true;
                cout << i+1 << " ";
            }
            if(count == 2)
                continue;
        }
        // 2.文字追加
        if(T.size() == S[i].size()-1){
            int count = 0;
            for(int j=0;j<S[i].size();j++){
                // cout << T[j] << "|" << S[i][j+count] << endl;
                if(T[j] != S[i][j+count]){
                    count++;
                    // cout << T[j] << "|" << S[i][j + count] << endl;
                    if(T[j] != S[i][j+count]){
                        count++;
                    }
                    if(count == 2)
                        break;
                }
            }
            if(count == 1){
                output = true;
                cout << i+1 << " ";
            }
            if(count == 2)
                continue;
        }
        // 2.文字削除
        if (T.size() == S[i].size() + 1){
            int count = 0;
            for (int j = 0; j < S[i].size(); j++){
                // cout << T[j] << "|" << S[i][j-count] << endl;

                if (T[j] != S[i][j - count])
                {
                    count++;
                    // cout << T[j] << "|" << S[i][j - count] << endl;

                    // if (T[j] != S[i][j - count])
                        // count++;

                    if (count == 2)
                        break;
                }
            }
            if (count == 1 || count == 0){
                output = true;
                cout << i + 1 << " ";
            }
            if (count == 2)
                continue;
        }
    }
    if(!output)
        cout << 0;
    cout << endl;
    return 0;

}