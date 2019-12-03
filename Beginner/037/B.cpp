#include <iostream>
#include <vector>
using namespace std;


int main(void){
    int N,Q;
    cin >> N >> Q;
    vector<int> a(N);
    int L,R,T;
    for(int i=0;i<Q;i++){
        cin >> L >> R >> T;
        for(int j=L-1;j<R;j++){
            a[j] = T;
        }
    }
    for(int i=0;i<N;i++){
        cout << a[i] << endl;
    }
}