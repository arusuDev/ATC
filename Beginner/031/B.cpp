#include <iostream>
using namespace std;

int main(void){
    int L,H,N;
    cin >> L >> H >> N;
    int* A = new int[N];
    for(int i=0;i<N;i++)
        cin >> A[i];
    
    for(int i=0;i<N;i++){
        if(A[i] < L){
            cout << L-A[i] << endl;
        }else if(A[i]>H){
            cout << -1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    delete A;
}