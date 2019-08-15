//21:36
#include <iostream>
using namespace std;

int main(void){
    int N,a,b,K,temp;
    cin >> N >> a >> b >> K;
    int* route = new int[K];
    bool flag = true;
    for (int i=0;i<K;i++){
        cin >> route[i];//移動した街。
        if(route[i] == a || route[i] == b){
            flag = false;
        }
        for(int j=0;j<i;j++){
            if(route[i] == route[j]){
                flag = false;
                break;
            }   
        }
        if(!flag){
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}