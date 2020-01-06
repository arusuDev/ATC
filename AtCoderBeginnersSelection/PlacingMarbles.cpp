#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int count = 0;
    while(a != 0){
        count += a % 10;
        a /= 10; 
    }
    cout << count << endl;
}