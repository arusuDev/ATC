#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> div;
    for(int i=1;i<=9;i++){
        if(N%i==0)
            div.push_back(i);
    }
    for(int i=0;i<=N;i++){
        bool flag=false;
        for(int j=0;j<div.size();j++){
            if(i % (N/div[j])==0){
                cout << div[j];
                flag = true;
                break;
            }
        }
        if(!flag)
            cout << '-';
    }
    cout << endl;

  return 0;

}