#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int N,M,P;
  cin >> N >> M >> P;
  int count=0;
  for(int i=1;i<=N;i++){
    if(M == i){
      count++;
      M = M+P;
    }
  }
  cout << count << endl;
}