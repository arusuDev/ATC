#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;

// setはユニークな要素を格納する連想コンテナの一種
// 要素自身がキー
// 実態としては、ソートがされた連想配列で、二分木として実装されるため、
// O(logN)で高速にアクセスする。
int main(void){
  int N;
  cin >> N;
  vector<string> S(N);
  for(auto& s:S)
    cin >> s;
  set<string> namelist;
  for(int i=0;i<N;i++){
    if(namelist.insert(S[i]).second)
      cout<<i+1<<endl;
  }
}