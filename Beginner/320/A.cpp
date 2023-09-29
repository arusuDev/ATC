#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int A,B;
    cin >> A >> B;
    int sum = 0;
    long long A_ex=1,B_ex=1;
    for(int i=0;i<B;i++){
        A_ex *= A;
    }
    for(int j=0;j<A;j++){
        B_ex *= B;
    }
    cout << A_ex + B_ex << endl;
    return 0;

}