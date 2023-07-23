#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

const int dx4[4]={-1,1,0,0};
const int dy4[4]={0,0,-1,1};
int main(void){
    int N,M;
    cin >> N >> M;
    vector<string> map(N);
    for(auto& line:map){
        cin >> line;
    }

    // 調査済みフラグ
    vector<vector<vector<int>>> flag(5,vector<vector<int>>(N,vector<int>(M,0)));
    flag[4][1][1] = 1;
    queue<vector<int>> q;
    q.push({4,1,1});
    while(!q.empty()){
        vector<int> status=q.front();
        q.pop();
        int stat = status[0];
        int x = status[1];
        int y = status[2];

        if(stat == 4){
            for(int i=0;i<4;i++){
                int next_x = x+dx4[i];
                int next_y = y+dy4[i];
                // 氷マス？
                if(map[next_x][next_y] == '.'){
                    if(flag[i][next_x][next_y] == 0){
                        flag[i][next_x][next_y] = 1;
                        q.push({i,next_x,next_y});
                    }
                }
            }
        }else{
            int next_x = x+dx4[stat];
            int next_y = y+dy4[stat];
            if(map[next_x][next_y] == '.'){
                if(flag[stat][next_x][next_y] == 0){
                    flag[stat][next_x][next_y] = 1;
                    q.push({stat,next_x,next_y});
                }
            }else{
                if(flag[4][x][y] == 0){
                    flag[4][x][y] = 1;
                    q.push({4,x,y});
                }
            }
        }
    }
    int ans=0;
    for(int x=1;x<N-1;x++){
        for(int y=1;y<M-1;y++){
            ans += max({flag[0][x][y],flag[1][x][y],flag[2][x][y],flag[3][x][y],flag[4][x][y]});
        }
    }
    cout << ans << endl;
}