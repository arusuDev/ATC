// C++のテンプレート
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int N;
    cin >> N;
    if(N%1111==0){
        cout << "SAME" << endl;
    }else{
        cout << "DIFFERENT" << endl;
    }
}