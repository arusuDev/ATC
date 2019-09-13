// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a==c||a==d||b==c||b==d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}