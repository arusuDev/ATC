#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> P(N);
    for(auto& p:P){
        cin >> p;
    }
    int max = *max_element(P.begin()+1,P.end());
    if(P[0] > max){
        cout << 0 << endl;
    }else{
        cout << max+1 - P[0] << endl;
    }
    return 0;

}