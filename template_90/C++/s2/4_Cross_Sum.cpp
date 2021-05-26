#include <iostream>
using namespace std;
const int N = 2000;
int A[N][N];

int main(void){
    int H,W;
    int Vertical[N],Horizon[N];
    cin >> H >> W;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> A[i][j];
        }
    }

    for(int v=0;v<H;v++){
        Vertical[v] = 0;
        for(int h=0;h<W;h++){
            Vertical[v] += A[v][h];
        }
    }

    for(int h=0;h<W;h++){
        Horizon[h] = 0;
        for(int v=0;v<H;v++){
            Horizon[h] += A[v][h];
        }
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout << Vertical[i] + Horizon[j] - A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}