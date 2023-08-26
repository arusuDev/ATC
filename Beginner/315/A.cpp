#include <iostream>
#include <string>
using namespace std;

int main(void){
    string S;
    cin >> S;
    for(int i=0;i<S.size();i++){
        if(S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u')
            cout << S[i];
    }
    cout << endl;
    return 0;
}