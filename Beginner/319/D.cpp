#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll=long long;
int main(void){
    int N,M;
    cin >> N >> M;
    vector<ll> L(N);
    ll W=0;
    for(auto &i:L)
        cin >> i;
    for(auto i:L)
        W += i;
    W+=(N+1);
    auto f = [&](ll w){
        // cout << "f:w" << w << endl; 
        ll l_sum = 0;
        ll line = 0;
        for(int i=0;i<N;i++){
            if(l_sum+1+L[i] > w){
                line++;
                l_sum = L[i];
            }else{
                l_sum += 1;
                l_sum += L[i];
            }
        }
        // cout << "w: " << w << " | line : " << line+1 << endl;  
        return line;
    };

    // 二分探索
    ll W_l = *min_element(L.begin(),L.end()),W_R = W;
    while(W_R - W_l > 1){
        // cout << "Left : "<<W_l << ": Right : " << W_R << endl;
        W = (W_l + W_R)/2;
        if(M<=f(W))
            W_l = W;
        else
            W_R = W;
    }
    cout << W_l << endl;
    return 0;
}