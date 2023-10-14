#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> a(N);
    for(auto &A:a)
        cin >> A;
    int x;
    x = a[0];
    bool flag = true;
    for(int i=1;i<N;i++){
        if(x != a[i])
            flag = false;
    }
    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}