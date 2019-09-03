// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(void){
    string S;
    int T;
    int pos_x=0,pos_y=0;
    int LR=0,UD=0,Q=0;
    cin >> S >> T;
 
    for(int i=0;i<S.size();i++){
        if(S[i]=='L'){
            LR--;
        }else if(S[i]=='R'){
            LR++;
        }else if(S[i]=='U'){
            UD++;
        }else if(S[i]=='D'){
            UD--;
        }else{
            Q++;
        }
    }
    if(T==1){
        cout << abs(LR)+abs(UD)+Q << endl;
    }else if(T==2){
        int M_dist=abs(LR)+abs(UD);
        if(M_dist>=Q){
            cout << M_dist - Q << endl; 
        }else if((Q-M_dist)%2==0){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }
    }
}