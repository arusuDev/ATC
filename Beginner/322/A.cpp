#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    string S;
    cin >> N >> S;
    bool flag = true;
    for(int i=0;i<N-2;i++){
        if(S.substr(i,3)=="ABC"){
            cout << i+1 << endl;
            flag = false;
            break;
        }
    }
    if(flag)
        cout << -1 << endl;
    return 0;
}