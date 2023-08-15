#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void){
  int N;
  cin >> N;
  double dist = -1.0;
  vector<int> x(N),y(N);
  for(int i=0;i<N;i++)
    cin >> x[i] >> y[i];

  // 100*100 通りくらいであれば全探索で良いはず。
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      double tmp_dist = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
      if(dist < tmp_dist)
        dist = tmp_dist;
    }
  }
  cout << sqrt(dist) << endl;

  return 0;
}