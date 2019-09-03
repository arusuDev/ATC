// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int N,Q;
    cin >> N >> Q;
    vector<int> left(N);
    vector<int> right(N);
    int l,r;
    for(int i=0;i<Q;i++){
        cin >> l >> r;
        left[l-1]++;
        right[r-1]++;
    }

    int count=0;
    for(int i=0;i<N;i++){
        count+=left[i];
        count-=right[i-1];
        cout << count%2 ;
    }
    cout << endl;
}