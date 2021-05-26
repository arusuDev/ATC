#include <iostream>
using namespace std;

long long gcd(long long a,long long b){
    if(a % b == 0){
        return b;
    }else{
        return gcd(b,a%b);
    }
}

int main(void){
    long long A,B,C;
    long long gcdABC;
    cin >> A >> B >> C;
    gcdABC = gcd(gcd(A,B),C);
    cout << (A/gcdABC) + (B/gcdABC) + (C/gcdABC) - 3<< endl;
}