// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int n;
    cin >> n;
    if(n%2==0)
        cout << n-1 << endl;
    else
        cout << n+1 << endl;
}