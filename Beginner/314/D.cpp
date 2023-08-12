#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int N,Q;
  string S;

  cin >> N >> S >> Q;
  int uplw = 0;
  vector<int> chgchar_idx;
  vector<char> chgchar;
  for(int q_idx=0;q_idx<Q;q_idx++){
    int t,x;
    char c;
    cin >> t >> x >> c;
    if(t == 1){
      S[x-1] = c;
      // 変更する必要があるindex
      chgchar.push_back(c);
      chgchar_idx.push_back(x-1); 
    }
    if(t == 2){
      uplw = 1;
      chgchar.clear();
      chgchar_idx.clear();
    }else if(t == 3){
      uplw = -1;
      chgchar.clear();
      chgchar_idx.clear();
    }
  }
  if(uplw == 1){
    transform(S.begin(),S.end(),S.begin(),::tolower);
  }else if(uplw == -1){
    transform(S.begin(),S.end(),S.begin(),::toupper);
  }
  for(int i=0;i<chgchar.size();i++){
    S[chgchar_idx[i]] = chgchar[i];
  }

  cout << S << endl;

  return 0;
}