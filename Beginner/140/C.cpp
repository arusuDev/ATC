// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N-1);
    for(int i=0;i<N-1;i++){
        cin >> B[i];
    }
    int max=B[0];
    int sum=B[0];
    for(int i=0;i<N-1;i++){
        if(i==N-2){
            sum += B[i];
        }else{
            sum += min(B[i],B[i+1]);
        }
    }
    cout << sum << endl;
}