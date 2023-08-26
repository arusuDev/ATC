#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(void){
    int H,W;
    cin >> H >> W;
    vector<vector<char>> C(H,vector<char>(W));
    vector<vector<int>> HC(H,vector<int>(26));
    vector<vector<int>> WC(W,vector<int>(26));
    for(int i=0;i<H;i++) 
        for(int j=0;j<W;j++){
            cin >> C[i][j];
            HC[i][C[i][j]-'a']++;
            WC[j][C[i][j]-'a']++;
        }

    while(true){
        bool check = false;
        vector<int> h_x;
        vector<int> w_x;
        // 1.その行に2枚以上のクッキーが残っており、それらの色が全て同じ
        for(int i=0;i<H;i++){
            bool only = false;
            bool first = true;
            int x;
            for(int j=0;j<26;j++){
                if(HC[i][j] > 0 && !first)
                    only = false;
                if(HC[i][j] > 0 && first){
                    if(HC[i][j] >= 2){
                        only = true;
                        x = j;
                    }
                    first = false;
                }
            }
            if(only){
                cout << "x " << x << endl;
                // 1種類の文字のみ　かつ 2文字以上の場合
                // check = true;
                // HC[i][x] = 0;
                // for(int j=0;j<W;j++)
                //     WC[j][x]--;
                h_x.push_back(x);
            }
        }
        // 2.その列に2枚以上のクッキーが残っており、それらの色がすべて同じ
        for(int i=0;i<W;i++){
            bool only = false;
            bool first = true;
            int x;
            for(int j=0;j<26;j++){
                if(WC[i][j] > 0 && !first)
                    only = false;
                if(WC[i][j] > 0 && first){
                    if(WC[i][j] >= 2){
                        only = true;
                        x = j;
                    }
                    first = false;
                }
            }
            if(only){
                cout << "w_x" << x << endl;
                w_x.push_back(x);
                // 1種類の文字のみかつ 2文字以上の場合
                // check = true;
                // WC[i][x] = 0;
                // for(int j=0;j<H;j++)
                //     HC[j][x]--;
            }
        }
        if(h_x.size() != 0 || w_x.size() != 0){
            check = true;
            if(h_x.size() != 0){

            }
        }
        // 3.終了か？
        if(!check)
            break;
    }
    int sum = 0;
    for(auto v:WC)
        sum += accumulate(v.begin(),v.end(),0);
    cout << sum << endl;
}
