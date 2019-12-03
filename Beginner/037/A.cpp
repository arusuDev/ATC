#include <iostream>
using namespace std;

int main(void){
    int A,B,C;
    cin >> A >> B >> C;
    if(A>B){
        cout << C/B << endl;
    }else{
        cout << C/A << endl;
    }
}