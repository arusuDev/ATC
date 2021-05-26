#include <iostream>
using namespace std;

const int NUM = 100001;
int main(void){
    int N,cn,tmp;
    int c[2][NUM];
    int Q,L,R;

    cin >> N;
    c[0][0] = 0;
    c[1][0] = 0;
    for(int i=1;i<N+1;i++){
        cin >> cn >> tmp;
        cn--;
        if(cn == 0){
            c[0][i] = c[0][i-1] + tmp;
            c[1][i] = c[1][i-1];
        }else{
            c[1][i] = c[1][i-1] + tmp;
            c[0][i] = c[0][i-1];
        }
    }

    // for(int i=0;i<N+1;i++){
    //     cout << i << ":c1 " << c[0][i] << " :c2 " << c[1][i] << endl;
    // }

    cin >> Q;
    for(int i=0;i<Q;i++){
        cin >> L >> R;
        cout << c[0][R]-c[0][L-1] << " " << c[1][R] - c[1][L-1] << endl;       
    }
   return 0;
}