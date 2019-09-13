// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    long long A,B,C;
    cin >> A >> B >> C;
    cout << ((A  * B % 1000000007) * C) % 1000000007 << endl;
}