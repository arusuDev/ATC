#include <iostream>
#include <string>
using namespace std;

int main(void){
    string S[3];
    cin >> S[0] >> S[1] >> S[2];
    int turn = 0;
    int temp;
    while(true){
        //どれかが空なら終了
        temp = S[turn][0]-'a';
        if(S[turn].empty())
            break;
        S[turn].erase(0,1);
        temp = turn;
    }
    cout << char('A'+turn) << endl;
}