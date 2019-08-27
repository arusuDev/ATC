// C++のテンプレート
#include <iostream>
#include <string>
using namespace std;

class numManager{
    int *number;
    numManager(int N){
        number = new int[N];
    }
}


int main(void){
    int N,a;
    long long k;
    cin >> N >> a >> k ;
    int* b = new int[N];
    for(int i=0;i<N;i++)
        cin >> b[i];
    
    delete b;
}