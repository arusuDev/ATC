// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int x,y;
    cin >> x >> y;
    if(x>y)
        cout << "Worse" << endl;
    else
        cout << "Better" << endl;
}