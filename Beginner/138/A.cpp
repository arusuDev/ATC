#include <iostream>
#include <string>
using namespace std;

int main(void){
    int a;
    string s;
    cin >> a >> s;
    if(a>=3200){
        cout << s << endl;
    }else{
        cout << "red" << endl;
    }
}