#include <iostream>
#include <string>
using namespace std;

int main(void){
    string s;
    cin >> s;
    if(s=="ACE" || s=="BDF" || s=="CEG" || s== "DFA" || s == "EGB" || s == "FAC" || s == "GBD"){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}