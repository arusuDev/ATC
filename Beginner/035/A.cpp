// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    float W,H;
    cin >> W >> H;
    if(W/H<1.4){
        cout << "4:3" << endl;
    }else{
        cout << "16:9" << endl;
    }
}