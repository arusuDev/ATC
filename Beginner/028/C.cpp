// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int n[5];
    int one=0,two=0,three=0;
    for(int i=0;i<5;i++)
        cin >> n[i];
    for(int i=4;i>=2;i--){
        for(int j=i-1;j>=1;j--){
            for(int k=j-1;k>=0;k--){
                if(one < n[i]+n[j]+n[k]){
                    three = two;
                    two = one;
                    one = n[i]+n[j]+n[k];
                }else if(two < n[i]+n[j]+n[k]){
                    three = two;
                    two = n[i]+n[j]+n[k];
                }else if(three < n[i]+n[j]+n[k]){
                    three = n[i]+n[j]+n[k];
                }else{
                    break;
                }
            }
        }
    }
    cout << three << endl;
}