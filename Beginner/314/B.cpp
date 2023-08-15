#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int N;
  cin >> N;
  vector<int> C(N);
  vector<vector<int>> A(N);
  for(int i=0;i<N;i++){
    cin >> C[i];
    for(int j=0;j<C[i];j++){
      int A_tmp;
      cin >> A_tmp;
      A[i].push_back(A_tmp);
    }
  }

  int X;
  cin >> X;

  vector<int> flag;
  vector<int> vsize;
  for(int i=0;i<N;i++){
    for(int j=0;j<C[i];j++){
      if(A[i][j] == X){
        flag.push_back(i);
        vsize.push_back(A[i].size());
      }
    }
  }

  if(vsize.size() == 0){
    cout << 0 << endl;
    return 0;
  }
  int min = *min_element(vsize.begin(),vsize.end());
  // cout << min << endl;
  int count = 0;
  for(int i=0;i<flag.size();i++){
    if(vsize[i] == min){
      count++;
    }
  }
  cout << count << endl;
  for(int i=0;i<flag.size();i++){
    if(vsize[i] == min){
      cout << flag[i]+1 << " ";
      // count++;
    }
  }
  return 0;
}