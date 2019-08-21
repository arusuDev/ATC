#include <iostream>
#include <string>
using namespace std;

int main(void){
    string S;
    int N;
    cin >> S >> N;
    cout << S[(N-1)/5] << S[(N-1)%5] << endl;
}