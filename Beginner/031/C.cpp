// C++のテンプレート
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int N,max=0,max_idx=0;
    cin >> N;
    int* ar = new int[N];
    for(int i=0;i<N;i++)
        cin >> ar[i];
    for(int t=0;t<N;t++){
        for(int a=0;a<N;a++){
            int A=0,H=0;
            if(t==a)
                continue;
            if(a<t){
                //aokiくんが高橋くんの選択した要素より左
                for(int iter=a;iter<t;iter++){
                    if(iter%2){
                        H+=ar[iter];
                    }else{
                        A+=ar[iter];
                    }
                }
            }else{
                for(int iter=t;iter<a;iter++){
                    if(iter%2){
                        H+=ar[iter];
                    }else{
                        A+=ar[iter];
                    }
                }
            }
            if(max < H){
                max = H;
            }
        }
    }
    cout << max << endl;
}