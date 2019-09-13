// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N-1);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        cin >> B[i];
    }
    for(int i=0;i<N-1;i++){
        cin >> C[i];
    }
    int sat = B[A[0]-1];
    for(int i=1;i<N;i++){
        sat += B[A[i]-1];
        if(A[i-1]+1 == A[i]){
            sat += C[A[i-1]-1];
        }
    }  
    cout << sat << endl;
}