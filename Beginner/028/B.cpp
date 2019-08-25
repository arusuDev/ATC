// C++のテンプレート
#include <iostream>
#include <string>
using namespace std;

int main(void){
    string S;
    int s[6] = {0,0,0,0,0,0};
    cin >> S;
    for(int i=0;i<S.size();i++){
        s[S[i]-'A']++;
    }
    for(int i=0;i<5;i++){
        cout << s[i] << " "; 
    }
    cout << s[5] << endl;
}