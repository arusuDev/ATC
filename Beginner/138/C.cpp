#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int* v = new int[N];
    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    sort(v,v+N);
    float alc = v[0];
    for(int i=1;i<N;i++){
        alc = float(alc + v[i])/2;
    }
    cout << alc << endl; 
    return 0;
}