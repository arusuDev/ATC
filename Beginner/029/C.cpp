// C++のテンプレート
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void pass(int N,int iter,string BF){
    if(iter == N){
        cout << BF << endl;
    }else{
        pass(N, iter + 1, BF + "a");
        pass(N, iter + 1, BF + "b");
        pass(N, iter + 1, BF + "c");
    }
}

int main(void){
    int N;
    cin >> N;
    pass(N,0,"");
}