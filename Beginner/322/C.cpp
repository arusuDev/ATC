#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N,M;
    cin >> N >> M;
    vector<int> A(M);
    for(auto &a:A)
        cin >> a;
    
    int idx = 0;
    // 
    for(int i=1;i<N+1;i++){
        if(i == A[idx]){
            cout << 0 << endl;
            idx++;
        }else{
            cout << A[idx] - i << endl;
        }
    }

    return 0;

}