#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// 時間切れ
// それぞれの値に対して期待値を算出して
// 最安となる組み合わせを求める・・・？
int main(void){
  int N,M;
  cin >> N >> M;
  vector<int> cost(N);
  vector<int> P(N);
  vector<vector<int>> R_No(N);
  for(int i=0;i<N;i++){
    cin >> cost[i] >> P[i];
    for(int j=0;j<P[i];j++){
      int tmp;
      cin >> tmp;
      R_No[i].push_back(tmp);
    } 
  }


  return 0;
}