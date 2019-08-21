#include <iostream>
using namespace std;

int main(void){
    int R,C,K,N;
    cin >> R >> C >> K >> N;
    int* r = new int[R];
    int* c = new int[C];
    int x,y;
    for(int i=0;i<N;i++){
        cin >> x >> y;
        r[x-1]++;
        c[y-1]++;
    }
    /*
    for(int i=0;i<R;i++){
        cout << r[i] << " ";
    }
    cout << endl;
    for(int i=0;i<C;i++){
        cout << c[i] << " ";
    }
    */
    int count = 1;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(r[i]+c[j] == K){
                count++;
            }
        }
    }
    cout << count << endl;
}