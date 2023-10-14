#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    long long N;
    cin >> N;
    while(N % 2 == 0)
        N /= 2;
    while (N % 3 == 0)
        N /= 3;
    if(N != 1)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
        
    return 0;
}