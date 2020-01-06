#include <iostream>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int* a = new int[N];
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    int count = 0;
    bool flag = true;
    while(flag){
        for(int i=0;i<N;i++){
            if(a[i]%2==0){
                a[i]/=2;
            }else{
                flag = false;
            }
        }
        if(flag)
            count++;
    }
    cout << count << endl;
    delete a;
}