// C++のテンプレート
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int N;
    cin >> N;
    if (N<60)
        cout << "Bad" << endl;
    else if (N<90)
        cout << "Good" << endl;
    else if (N<100)
        cout << "Great" << endl;
    else if (N==100)
        cout << "Perfect" << endl;
}