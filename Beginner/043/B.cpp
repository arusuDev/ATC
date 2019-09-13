// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    string s;
    cin >> s;
    string res = "";
    for(int i=0;i<s.size();i++){
        if(s[i] == '0'){
            res = res + "0";
        }else if(s[i] == '1'){
            res = res + "1";
        }else{
            if(!res.empty())
                res.pop_back();
        }
    }
    cout << res << endl;
}