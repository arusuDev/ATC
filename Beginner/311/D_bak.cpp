#include <iostream>
#include <vector>
#include <string>
using namespace std;

void dfs(vector<string>& map,vector<vector<int>>& check,int stat,int x,int y){
    
    // 停止かつ、調査済みの場合はreturnする
    if(check[x][y] == 1 && stat == 0){
        return;
    }
    switch (stat)
    {
    case 0:
        cout << x << "," << y << endl;
        check[x][y] = 2;
        // 上下左右に移動する
        if(map[x][y-1] != '#')
            dfs(map,check,1,x,y-1);
        if(map[x][y+1] != '#')
            dfs(map,check,2,x,y+1);
        if(map[x-1][y] != '#')
            dfs(map,check,3,x-1,y);
        if(map[x+1][y] != '#')
            dfs(map,check,4,x+1,y);
        break;
    case 1:
        // 現在の座標にチェックを入れる
        check[x][y] = 1;
        // 自分の座標から上方向が岩の場合その場で停止し、stat 0としてdfsを呼び出す。
        if(map[x][y-1] != '#')
            dfs(map,check,1,x,y-1);
        else
            dfs(map,check,0,x,y);
        break;
    case 2:
        // 現在の座標にチェックを入れる
        check[x][y] = 1;
        // 自分の座標から上方向が岩の場合その場で停止し、stat 0としてdfsを呼び出す。
        if(map[x][y+1] != '#')
            dfs(map,check,2,x,y+1);
        else
            dfs(map,check,0,x,y);
        break;
    case 3:
        // 現在の座標にチェックを入れる
        check[x][y] = 1;
        // 自分の座標から上方向が岩の場合その場で停止し、stat 0としてdfsを呼び出す。
        if(map[x-1][y] != '#')
            dfs(map,check,3,x-1,y);
        else
            dfs(map,check,0,x,y);
        break;
    case 4:
        // 現在の座標にチェックを入れる
        check[x][y] = 1;
        // 自分の座標から上方向が岩の場合その場で停止し、stat 0としてdfsを呼び出す。
        if(map[x+1][y] != '#')
            dfs(map,check,4,x+1,y);
        else
            dfs(map,check,0,x,y);
        break;
    }
}

int main(void){
    int N,M;
    cin >> N >> M;
    vector<string> map(N);
    vector<vector<int>> check(N,vector<int>(M,0));
    for(auto& line:map){
        cin >> line;
    }

    // (1,1)でスタートする
    dfs(map,check,0,1,1);
    // checkの数をカウントする
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            count += check[i][j];
        }
    }
    cout << count << endl;
    return 0;
}