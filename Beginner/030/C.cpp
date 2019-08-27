// C++のテンプレート
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int N,M,X,Y;
    cin >> N >> M >> X >> Y;
    int* a = new int[N];
    int* b = new int[M];
    for(int i=0;i<N;i++)
        cin >> a[i];
    for(int i=0;i<M;i++)
        cin >> b[i];
    int count = 0,time=a[0],a_idx=0,b_idx=0;
    //a[0]から飛ぶとすると、bにつくのは、a[0]+X
    while(a_idx<N && b_idx<M){
        //a[0]に乗るところから始まる。
        time = a[a_idx] + X;
        // cout << "bの到着時間：" << time << endl;
        while(b[b_idx] < time && b_idx<M){
            //bの時刻が時間よりも小さいならば乗れないので飛ばす。
            b_idx++;
            // cout << b_idx << endl;
        }
        if(b_idx == M){
            break;
        }
        //bからaに移動するにはY時間かかる。
        // cout << b_idx << endl;
        time = b[b_idx] + Y;
        // cout << "aの到着時間：" << time <<endl;
        count++;
        // cout << "往復回数：" << count << endl;
        while(a[a_idx] < time&& a_idx<N){
            a_idx++;
            //cout << a_idx << endl;
        }
        if(a_idx == N){
            break;
        }
    }
    cout << count << endl;
    delete a;
    delete b;
}