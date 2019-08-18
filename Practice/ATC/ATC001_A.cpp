#include <iostream>
using namespace std;

int H,W;
class Cell{
    public:
        char stat;
        bool arrived;
    Cell(){
        //Constructor
        arrived = false;
    }
};
bool search(int x, int y, Cell board[500][500])
{
    //ボードより外ならば終了
    if(x<0||x>=W || y<0 || y>=H)
        return false;
    //すでに到着済みならば終了
    if(board[y][x].arrived)
        return false;
    
    if(board[y][x].stat == 'g'){
        //cout << "ゴールは(x:" << x << " ,y: " << y << ")だよ。";
        return true;
    }
    if(board[y][x].stat == '#'){
        return false;
    }
    //到着フラグをtrueにする。
    board[y][x].arrived = true;
    
    //cout << "x:" << x <<" y:" << y << endl;
    //4方向へ移動
    if(search(x+1,y,board)||search(x-1,y,board)||search(x,y+1,board)||search(x,y-1,board)){
        return true;
    }else{
        return false;
    }
}

int main(void){
    cin >> H >> W;
    int x,y;
    /*
    Cell** board = new Cell*[H];
    for(int i=0;i<W;i++){
        board[i] = new Cell[W];
    }
    */
   Cell board[500][500];

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> board[i][j].stat;
            if(board[i][j].stat == 's'){
                x = i;
                y = j;
            }
        }
    }
    /*
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++)
            cout << board[i][j].stat;
        cout << endl;
    }
    */
    //cout << "探索開始" << endl;
    if(search(x,y,board)){
        cout << "Yes";
    }else{
        cout << "No";
    }
    cout << endl;
    /*
    if(H != 1){
        for (int i = 0; i < W; i++)
        {
            delete[] board[i];
        }
    }
    delete[] board;
    */
}