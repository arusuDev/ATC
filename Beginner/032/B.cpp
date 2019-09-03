// C++のテンプレート
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
    string s;
    int k;
    vector<string> log;
    cin >> s >> k;
    if(s.length() < k){
        cout << 0 << endl;
        return 0;
    }
    bool in;
    for(int i=0;i<s.length()-k+1;i++){
        in = false;
        for(int hash=0;hash<log.size();hash++){
            if(log[hash] == s.substr(i,k)){
                in = true;
                break;
            }
        }
        if(!in){
            log.push_back(s.substr(i,k));
        }
    }
    cout << log.size() << endl;
}