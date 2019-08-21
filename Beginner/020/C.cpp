#include <iostream>
#include <cmath>
using namespace std;

int x1,y1,x2,y2;//1にはSの座標、2にはGの座標をとってくる。
void swap(int* x,int*y)
{
    int* temp = x;
    y = x;
    x = temp;
}

int dfs(char** board,bool** flag){
    //深さ優先探索

}
int main(void){
    int H,W,T;
    int deep;
    char temp;
    cin >> H >> W >> T;

    char **board = new char*[H];
    bool **flag = new bool*[H];
    for (int i=0;i<H;i++){
        board[i] = new char[W];
        flag[i] = new bool[W];
    }

    for(int h=0;h<H;h++){
        for(int w=0;w<W;w++){
            cin >> temp;
            if(temp == 'S'){
                x1 = w;
                y1 = h;
            }else if(temp == 'G'){
                x2 = w;
                y2 = h;
            }
            board[h][w] = temp;
            flag[h][w] = false;
        }
    }
    //DFSを使うとして、探索しなければいけない範囲はdeep x2-x1 + y2-y1で与えられる。
    deep = abs(x2-x1) + abs(y2-y1) - 1;
    
    for(int i=0;i<H;i++){
        delete[] board[i];
        delete[] flag[i];
    }
    delete[] board;
    delete[] flag;
}