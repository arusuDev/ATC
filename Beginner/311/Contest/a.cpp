#include <iostream>
#include <string>
using namespace std;

int main(void){
    int N;
    string s;
    bool a=false,b=false,c=false;
    cin >> N >> s;

    for(int i=0;i<s.size();i++){
        if(s[i] == 'A'){
            a=true;
        }else if(s[i] == 'B'){
            b=true;
        }else if(s[i] == 'C'){
            c=true;
        }
        if(a&&b&&c){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}