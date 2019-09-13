// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int five=0,seven=0,temp;
    for(int i=0;i<3;i++){
        cin >> temp;
        if(temp == 5)
            five++;
        if(temp == 7)
            seven++;
    }
    if(five==2&&seven==1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}