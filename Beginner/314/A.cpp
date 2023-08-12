#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  string pi="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
  int N;
  cin >> N;
  cout << pi.substr(0,N+2) << endl;
  return 0;
}