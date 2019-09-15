// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int alp[26] = {};
    string w;
    cin >> w;
    for(int i=0;i<w.size();i++){
        alp[w[i]-'a']++;
    }
    bool tf=true;
    for(int i=0;i<26;i++)
        if(alp[i]%2==1){
            tf=false;
            break;
        }
    if(tf)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}