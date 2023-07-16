#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    int count=0;
    cin >> N;
    vector<string> s(N);
    unordered_set<string> us;
    for(int i=0;i<N;i++){
        cin >> s[i];
    }
    for(int i=0;i<N;i++){
        string r_s = s[i];
        reverse(r_s.begin(),r_s.end());
        // unordered_setに登録済みか判定する
        if(!(us.count(s[i]) || us.count(r_s))){
            // 登録済みでなければ挿入する
            us.insert(s[i]);
        }
    }
    cout << us.size() << endl;
    return 0;
}