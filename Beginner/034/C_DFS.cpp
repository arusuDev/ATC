// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int c;

using namespace std;

void DFS(int dist_x,int dist_y,int x,int y,bool board){
    //盤の外ならreturn
    if(x<0||x>dist_x||y<0||y>dist_y)
        return;
    if(x==dist_x && y==dist_y){
        c++;
        return;
    }
    DFS(dist_x,dist_y,x,y+1,board);
    DFS(dist_x,dist_y,x+1,y,board);
}

int main(void){
    int dist_x,dist_y;
    cin >> dist_x >> dist_y;
    bool** board = new bool*[dist_y];
    for(int i=0;i<dist_x;i++){
        board[i] = new bool[dist_x];
    }
    DFS(dist_x-1,dist_y-1,0,0,board);
    cout << c%1000000007 << endl;
}