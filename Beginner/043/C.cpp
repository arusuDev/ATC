// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> a(N);
    bool flag=0;
    for(int i=0;i<N;i++)
        cin >> a[i];
    int min = -1;
    int val = -1;
    for(int value = -100;value <= 100;value++){
        int sum = 0;
        for(int i=0;i<N;i++){
            sum += (a[i]-value)*(a[i]-value);
        }
        if(min == -1){
            min = sum;
            val = value;
        }else if(min > sum){
            min = sum;
            val = value;
        }
    }
    cout << min << endl;
}