// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    string tea;
    cin >> tea;
    if(tea[tea.length()-1] == 'T')
        cout << "YES" << endl;
    else
        cout << "NO" << endl; 
}