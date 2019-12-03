#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int N,K;
    long long pat;
    cin >> N >> K;
    pat = K;
    for(int i=1;i<N;i++){
        pat *= (K-1);
    }
    cout << pat << endl;
}