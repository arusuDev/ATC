#include <iostream>
using namespace std;

class Cell{
    public:
    int r,c;
};

int main(void){
    int R,C,K,N;
    cin >> R >> C >> K >> N;
    Cell* candy = new Cell[N];
    for(int i=0;i<N;i++){
        cin >> candy[i].r >> candy[i].c; 
    }
    int** board = new int*[R];
    for(int i=0;i<R;i++){
        board[i] = new int[C];
    }
    /*
    for(int i=0;i<N;i++){
        cout << i << ":" <<candy[i].r << candy[i].c << endl;
    }
    */
    for(int i=0;i<N;i++){
        for(int row=0;row<R;row++){
            board[row][candy[i].c-1]++;
        }
        for(int col=0;col<C;col++){
            board[candy[i].r-1][col]++;
        }
        board[candy[i].r-1][candy[i].c-1]--;
    }
    /*
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    */
    int count = 0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(K==board[i][j])
                count++;
        }
    }
    cout << count << endl;
    
    for(int i=0;i<R;i++){
        delete[] board[i]; 
    }
    delete[] board;
    
}