#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> L(N);
    int count =0;
    for(auto &l : L)
        cin >> l;
    sort(L.begin(),L.end());

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                if(L[i] == L[j] || L[i] == L[k] || L[j] == L[k]){
                    continue;
                }
                if(L[i]+L[j] > L[k])
                    count++;
            }
        }
    }
    cout << count << endl;
}