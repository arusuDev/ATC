#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N,M;
    string S,T;
    bool st=false,sb=false;
    cin >> N >> M >> S >> T;
    if(T.substr(0,N)==S)
        st = true;
    if (T.substr(M - N, N) == S)
        sb = true;

    if(st&&sb)
        cout << 0 << endl;
    else if(st&&!sb)
        cout << 1 << endl;
    else if(!st&&sb)
        cout << 2 << endl;
    else
        cout << 3 << endl;
    return 0;
}