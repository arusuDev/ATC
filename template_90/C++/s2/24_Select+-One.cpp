#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int N,K;
    int A[1000],B[1000];
    
    cin >> N >> K;
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        cin >> B[i];
    }

    int C = 0;
    for(int i=0;i<N;i++){
        C += abs(A[i]-B[i]);
    }
    if (C > K){
        cout << "No" << endl;
    }else{
        if((K-C)%2 == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}