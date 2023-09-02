#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int N;
  cin >> N;
  int A,B,C,D;
  vector<vector<int>> sheet(100,vector<int>(100,0));
  for(int i=0;i<N;i++){
    cin >> A >> B >> C >> D;
    for(int x=A;x<B;x++){
      for(int y=C;y<D;y++){
        sheet[x][y] = 1;
      }
    }
  }
  int count = 0;
  for(int i=0;i<100;i++){
    for(int j=0;j<100;j++)
      if(sheet[i][j]==1)
        count++;
  }
  cout << count << endl;
  return 0;
}