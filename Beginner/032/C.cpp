// C++のテンプレート
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
    int N,K,temp;
    vector<int> s;
    cin >> N >> K;
    bool zero=false;
    for(int i=0;i<N;i++){
        cin >> temp;
        if(temp == 0)
            zero = true;
        s.push_back(temp);
    }
    if(zero){
        cout << N << endl;
        return 0;
    }
    int max = 0;
    int count = 0;
    for(int i=0;i<N;i++){
        count = 0;
        temp = 1;
        int j=0;
        while(i+j < N){
            temp *= s[i+j];
            if(temp > K){
                break;
            }
            count++;
            j++;
            //cout << i+j << ":" << temp << endl;
        }
        if(max < count){
            max = count;
        }
        //cout << endl;
    }
    cout << max << endl;
}