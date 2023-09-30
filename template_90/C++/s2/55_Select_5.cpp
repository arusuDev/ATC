#include <iostream>
#include <vector>
using namespace std;
using ll=long long;
int main(void){
  int N,P,Q;
  int count = 0;
  cin >> N >> P >> Q;
  vector<ll> A(N);
  for(auto &a:A){
    cin >> a;
    a %= P;
  }
  // 演算の優先度は*と%一緒だから *,%を交互にかけば前から計算してくれる
  for(int i=0;i<N;i++)
    for(int j=0;j<i;j++)
      for(int k=0;k<j;k++)
        for (int l = 0; l < k; l++)
          for (int m = 0; m < l; m++)
            if(1LL*A[i]*A[j]%P*A[k]%P*A[l]%P*A[m]%P == Q)
              count++;
  cout << count << endl;
  return 0;
}