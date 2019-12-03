#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int l = sqrt(n);
    int min=1000;
    for(int i=1;i<l+1;i++){
        if(int(n/i) - i + n%i < min){
            min = int(n/i) - i + n%i;
        }
    }
    cout << min << endl;
    return 0;
}