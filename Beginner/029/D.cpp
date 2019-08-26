// C++のテンプレート
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

unsigned GetDigit(unsigned num){
    return log10(num)+1;
}

int main(void){
    int N,digit,count=0;
    cin >> N;
    // 0-9 -> 1回
    // 0-99 -> 10-19で10回 + 1の位で10回 -> 20回
    // 0-999 -> 100-199 で100回 + 10-19,110-119,~,910-919で100回,1の位で100回
    while(N>10){
    digit = GetDigit(N);
    // 50000 -> 50000/9999 = 
    cout << "digit: " <<digit << endl;
    cout << pow(10,digit-1)-1 << endl;
    int nine = pow(10,digit-1)-1;
    count += (N/nine) * ((digit)*pow(10,digit-2));
    // cout << N%nine << endl;
    cout << "count : " <<count << endl;
    N = N%nine;
    // cout << long(digit-1*pow(10,digit-1)) << endl;
    }
    if(N!=0){
        count++;
    }
    cout << count << endl;
}