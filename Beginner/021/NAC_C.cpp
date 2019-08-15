// 21:48
#include <iostream>
#include <queue>
using namespace std;



int main(void){
    int N,a,b,M;
    cin >> N >> a >> b >> M;
    int **road = new int*[N];
    for(int i=0;i<N;i++){
        road[i] = new int[N];
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            road[i][j] = 0;
    }
    
    int x,y;
    for(int i=0;i<M;i++){
        cin >> x >> y;
        road[x-1][y-1] = 1;
        road[y-1][x-1] = 1;
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << road[i][j] << " ";
        }
        cout << endl;
    }

    //多分深さ優先探索じゃなくて幅優先探索を使うのだと思う。
    for(int i=0;i<N;i++){
        delete[] road[i];
    }
    delete[] road;
}