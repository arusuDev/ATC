#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  long long N,D,P;
  cin >> N >> D >> P;
  vector<long long> F(N);
  for(auto &f:F)
    cin >> f;
  sort(F.begin(),F.end());
  
  long long price = 0;
  // 余り
  long long base = N%D;
  long long idx = 0;
  while(true){
    // cout << idx << ":" << price << endl;
    long long sum = 0;
    for(;idx<base && idx!= N;idx++){
      sum += F[idx];
    }
    // 周遊券を買った方が安い場合はbreak;
    if(sum >= P){
      // cout << idx << "A" << endl;
      idx -= D;
      break;
    }else{
      // cout << idx << "B" << endl;
      price += sum;
      base += D;
    }
    if(idx == N){
      // cout << idx << "C" << endl;
      // price += sum;
      break;
    }
  }
  // cout << N << ":" << idx << endl;
  price += P*(N-idx)/D;
  cout << price << endl;

  return 0;
}