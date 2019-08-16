//21:00~
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int* A = new int[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    sort(A,A+N);
    int count=0;
    for(int i=1;i<N;i++){
        if(A[i-1]==A[i])
            count++;
    }
    cout << count  << endl;
    delete A;
}