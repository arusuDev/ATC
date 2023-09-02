#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int rec(int N,int n,vector<int> F){
  F[n] = 1;
  cout << "現在選択のノードは" << n << endl;
  if(count(F.begin(),F.end(),0) == 0){
    cout << "入った" << endl;
    return 0;
  }
  for(int i=0;i<N;i++){
    if(!F[i])
      return rec(N,i,F);
  }
}


int main(void){
  int N;
  cin >> N;
  vector<vector<long long>> D(N-1,vector<long long>(N));
  for(int i=0;i<N-1;i++){
    for(int j=0;j<N-1-i;j++){
      cin >> D[i][j];
    }
  }

  // 選択済みか？
  vector<int> F(N,0);
  int max = 0;
  cout << rec(N,0,F);

  return 0;
}