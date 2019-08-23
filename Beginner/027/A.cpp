// C++のテンプレート
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int l[3];
    for(int i=0;i<3;i++)
        cin >> l[i];
    
    if(l[0] == l[1]){
        cout << l[2] << endl;    
    }else if(l[1] == l[2]){
        cout << l[0] << endl;
    }else{
        cout << l[1] << endl;
    }
}