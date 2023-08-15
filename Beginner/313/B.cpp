#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N,M;
    cin >> N >> M;
    vector<int> P(N,0);
    for(int i=0;i<M;i++){
        int A,B;
        cin >> A >> B;
        P[B-1] = -1;
    }
    
    int cnt = count(P.begin(),P.end(),0);
    if(cnt == 1){
        int idx = 0;
        for(;idx<N;idx++)
            if(P[idx] == 0){
                break;
            }
        cout << idx+1 << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}