// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int N,sum=0;
    cin >> N;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    cout << sum << endl;
}