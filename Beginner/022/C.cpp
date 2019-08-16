//21:10
#include <iostream>
using namespace std;

int main(void){
    int N,M;
    cin >> N >> M;
    int **graph = new int*[N];
    for(int i=0;i<N;i++){
        graph[i] = new int[N]; 
    }
    
    int u,v,l;
    for(int i=0;i<M;i++){
        cin >> u >> v >> l;
        graph[u-1][v-1] = l;
        graph[v-1][u-1] = l;
    }
    
    //これは深さ優先探索っぽい。
    
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    
    
    for(int i=0;i<N;i++){
        delete[] graph[i];
    }
    delete[] graph;
    return 0;
}