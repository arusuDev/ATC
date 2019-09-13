// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    string S;
    cin >> S;
    string MS[7] = {"Do","Re","Mi","Fa","So","La","Si"};
    char temp=S[0];
    int count=0;
    for(int i=1;i<S.length();i++){
        if(temp != S[i]){
            //前と異なるなら判別基準にならない。
            temp = S[i];
            if(temp == 'W')
                count++;
            continue;
        }
        if(temp == S[i]){
            //前と同じなら
            if(S[i+6]==S[i+7]){
                //今ファで、シとドが等しい場合
                cout << MS[(9-count)%7] << endl;
            }
            if(S[i+4]==S[i+5]){
                //今ドで、ミとファが等しい場合
                cout << MS[(13 - count) % 7] << endl;
            }
            break;
        }
    }
}