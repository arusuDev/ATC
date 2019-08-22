// C++のテンプレート
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int* r = new int[N];
    for(int i=0;i<N;i++)
        cin >> r[i];
    sort(r,r+N);
    int sum = 0;
    bool pm = true;
    for(int i=N-1;i>=0;i--){
        if(pm){
            sum += r[i]*r[i];           
        }else{
            sum -= r[i]*r[i];
        }
        pm = !pm;
    }
    cout << setprecision(10) << double(sum)*M_PI << endl;
}