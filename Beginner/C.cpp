#include <iostream>
using namespace std;

class Cell{
    public:
    int y,x,score;
    int rank;
}
int main(void){
    Cell* boardscore[12];
    int board[3][3] = {0,0,0,0,0,0,0,0,0};
    int chokudai = 0,naoko = 0;
    for(int i=0;i<12;i++){
        if(i<6){
            Cell[i].y = i/3;
            Cell[i].x = i%3;
        }else{
            Cell[i].y = (i-6)/2;
            Cell[i].x = (i-6)%3;
        }
        cin >> Cell[i].score;
    }
    for(int i=)

    for(int turn = 0;turn < 9;turn++){
        bool cc = true % 2; //falseなら直大くんのターン。
        if(!cc){

        }
    }
}