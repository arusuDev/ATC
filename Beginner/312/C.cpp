#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N,M;
    cin >> N >> M;
    vector<long long>A(N),B(M);
    for(auto &a:A)
        cin >> a;
    for(auto &b:B)
        cin >> b;
    
    sort(A.begin(),A.end(),greater<long long>());
    sort(B.begin(),B.end(),greater<long long>());

    // for(auto a:A)
    //     cout << a << " ";
    // cout << endl;
    // for(auto b:B)
    //     cout << b << " ";
    // cout <<endl;

// 120 110 90
// 10000 120 100 80
// 120円で売ってもいい→10000,120 (2,1)
// 110円で売ってもいい→10000,120 (2,2)
    for(int i=0;i<N-1;i++){
        if(A[i] > B[i] && A[i] < B[i+1]){
            cout << A[i] << endl;
        }
        
    }

    // if(B[0] <= A[A.size()-1]){
    //     cout << B[0] + 1 << endl;
    //     return 0;
    // }
    // bool flag = true;
    // for(int i=0;i<A.size();i++){
    //     int j;
    //     for(j=0;j<B.size();j++){
    //         if(A[i] > B[j]){
    //             // cout << i << j << endl;
    //             break;
    //         }
    //     }
    //     if(i >= j-1){
    //         flag = false;
    //         cout << A[i] << endl;
    //         break;
    //     }
    // }
    // // if(flag){
    //     cout << B[B.size()-1] + 1 << endl;
    // }
    return 0;
}