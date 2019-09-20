// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int W,H,N;
    cin >> W >> H >> N;
    vector<vector<bool>> board(H,vector<bool>(W));
    int x,y,a;
    for(int iter=0;iter<N;iter++){
        cin >> x >> y >> a;
        switch(a){
            case 1:
                for(int i=0;i<H;i++){
                    for(int j=0;j<x;j++){
                        board[i][j] = true;
                    }
                }
                break;
            case 2:
                for(int i=0;i<H;i++){
                    for(int j=x;j<W;j++){
                        board[i][j] = true;
                    }
                }
                break;
            case 3:
                for(int i=0;i<y;i++){
                    for(int j=0;j<W;j++)
                        board[i][j] = true;
                }
                break;
            case 4:
                for(int i=y;i<H;i++){
                    for(int j=0;j<W;j++){
                        board[i][j] = true;
                    }
                }
        }
    }
    int count = 0;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++)
            if(!board[i][j])
                count++;
    }
    cout << count << endl;
}