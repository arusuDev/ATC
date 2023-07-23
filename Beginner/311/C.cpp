#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);

    for(auto& a:A){
        cin >> a;
        a--;
    }
    
    vector<int> fl(N,0),s;
    int v=0;
    // まだ移動していない？
    while(fl[v] == 0){
        fl[v] = 1;
        s.push_back(v);
        v=A[v];
    }

    // vが閉路のスタートとなる
    vector<int> ans;
    for(auto& x:s){
        if(x == v){
            v=-1;
        }
        if(v==-1){
            ans.push_back(x);
        }
    }
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++){
        if(i){
            cout << " ";
        }
        cout << ans[i]+1;
    }
    cout << endl;
    return 0;
}