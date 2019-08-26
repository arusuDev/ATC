// C++のテンプレート
#include <iostream>
#include <string>
using namespace std;

int main(void){
    string S;
    int count = 0;
    for(int i=0;i<12;i++){
        cin >> S;
        if(S.find("r") != string::npos)
            count++;
    }
    cout << count << endl;
}