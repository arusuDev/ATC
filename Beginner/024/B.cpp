#include <iostream>
using namespace std;

int main(void){
    int N,T;
    cin >> N >> T;
    int* A = new int[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    //全体で開いていた時間（重複を考えない）
    int sum = T*N;
    for(int i=1;i<N;i++){
        if(A[i]-A[i-1] < T){
            sum -= (T-A[i]+A[i-1]);
        }
    }
    cout << sum << endl;
}