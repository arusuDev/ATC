#include <iostream>
using namespace std;

int main(void){
    int N;
    cin >> N;
    long long *A,*B;
    A = new long long[N];
    B = new long long[N];

    for (int i=0;i<N;i++){
        cin >> A[i] >> B[i];
    }

    long long sum=0;
    // 1 - 5 -> 1,2,3,4,5 (1+5)*(5-1+1)/2 = 6*2.5 = 15
    // 1 - 6 -> 1,2,3,4,5,6 (1+6)*(6-1+1)/2 = 7*3 = 21
    for (int i=0;i<N;i++){
        sum += ((A[i]+B[i]))*(B[i]-A[i]+1)/2;
    }


    cout << sum;
    delete A;
    delete B;
    return 0;
}