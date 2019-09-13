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
    for(int i=0;i<N;i++)
        cin >> a[i];
    long temp=a[0],l=0,r=0,count=0;
    for(int i=1;i<N;i++){
        if(temp<a[i]){
            r=i; // 条件を満たすなら右を伸ばす。
        }else{
            //三角をイメージ。
            count += (r-l+1)*(r-l+2)/2;
            // temp,l,rを更新
            l = i;
            r = i;
        }
        if(i==N-1){
            count += (r - l + 1) * (r - l + 2) / 2;
        }
        temp = a[i];
        //cout << i << ":l " << l << " :r " << r << " :count "<< count << endl;
    }
    cout << count << endl;
}