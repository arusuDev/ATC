#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int N,M;
  cin >> N >> M;
  string S;
  cin >> S;
  vector<int> C(N);
  for(auto &c:C)
    cin >> c;
  
  vector<string> A(M);
  for(int i=0;i<N;i++){
    A[C[i]-1].push_back(S[i]);
  }
  for(int i=0;i<M;i++){
    string tmpstr=A[i].substr(0,A[i].size()-1);
    A[i] = A[i][A[i].size()-1] + tmpstr;
  }

  vector<int> index(M,0);
  for(int i=0;i<N;i++){
    cout << A[C[i]-1][index[C[i]-1]];
    index[C[i]-1]++;
  }
  cout << endl;
  return 0;
}