// C++のテンプレート
#include <iostream>
#include <string>
using namespace std;

int main(void){
    double A,B,C,D;
    cin >> A>>B>>C>>D;
    if(B/A>D/C)
        cout << "TAKAHASHI" << endl;
    else if(B/A<D/C)
        cout << "AOKI" << endl;
    else
        cout << "DRAW" << endl;
}