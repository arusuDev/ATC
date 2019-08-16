//20:51~
#include <iostream>
using namespace std;

int main(void){
    int N,S,T,W;
    cin >> N >> S>> T >> W;
    int* A = new int[N];
    for(int i=0;i<N-1;i++)
        cin >> A[i];
    int best=0;
    for(int i=0;i<N-1;i++){
        if(W>=S&&W<=T)
            best++;
        W += A[i];
    }
    if(W>=S&&W<=T)
        best++;
    cout << best <<endl;
    delete A;
}