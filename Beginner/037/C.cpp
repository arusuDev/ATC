#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int N,K;
    long long sum=0;
    cin >> N >> K;
    vector<long long> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    int judge = K > N-K+1 ? N-K+1 : K;
    for(int i=0;i<(N+1)/2;i++){
        
        // 
        // cout << i <<":"<<a[i] << "|" << N-i-1 << a[N-i-1] << endl; 
        if (i<judge){
            sum += a[i]*(i+1);
            if(i!=N-i-1)
                sum += a[N-i-1]*(i+1);
        }else{
            sum += a[i]*judge;
            if(i!=N-i-1)
                sum += a[N-i-1]*judge;
        }
    }
    cout << sum << endl;
}