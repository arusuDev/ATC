// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b+c || b == a+c || c == a+b )
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}