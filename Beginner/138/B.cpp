#include <iostream>
using namespace std;

int main(void){
    int N,temp;
    double sum = 0.0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> temp;
        sum += 1/double(temp);
    }
    cout << 1/sum;
}