// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    __int64_t W,H;
    cin >> W >> H;
    vector<vector<__int64_t>> board(H,vector<__int64_t>(W));
    for(int i=0;i<W;i++){
        board[0][i] = 1;
    }
    for(int i=0;i<H;i++){
        board[i][0] = 1;
    }
    for(int i=1;i<H;i++){
        for(int j=1;j<W;j++){
            board[i][j] = board[i-1][j] + board[i][j-1];
            board[i][j] %= 1000000007;
        }
    }
    cout << board[H-1][W-1] << endl;
}