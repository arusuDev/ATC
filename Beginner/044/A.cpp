#include <iostream>
using namespace std;

int main(void){
    int N,K,X,Y;
    cin >> N >> K >> X >> Y;
    if(N<K){
        cout << X*N;
    }else{
        cout << X*K + Y*(N-K);
    }
}