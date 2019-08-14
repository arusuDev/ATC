#include <iostream>
#include <string>
using namespace std;

int main(void){
    int A,B;
    cin >> A >> B;
    cout << stoi(to_string(A)+to_string(B))*2 << endl;
}