#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N,A,B;
    cin >> N >> A >> B;   
    string s;
    int d,pos=0;
    for(int i=0;i<N;i++){
        cin >> s >> d;
        if(s == "East"){
            if(d < A){
                pos += A;
            }else if(d < B){
                pos += d;
            }else{
                pos += B;
            }
        }else{
            if(d < A){
                pos -= A;
            }else if(d<B){
                pos -= d;
            }else{
                pos -= B;
            }
        }
    }

    if(pos < 0){
        cout << "West "; 
    }else if(pos > 0){
        cout << "East "; 
    }
    cout << abs(pos) << endl;
}