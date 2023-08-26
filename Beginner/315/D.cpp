#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int check(vector<string> &S){
    vector<bool> flag(S.size(),false);
    vector<bool> flag_W(S[0].size(),false);
    vector<string> update;
    for(int i=0;i<S.size();i++)
        if(count(S[i].begin(),S[i].end(),*S[i].begin()) == S[i].size() && S[i].size() > 1)
            flag[i] = true;

    for(int i=0;i<S[0].size();i++){
        bool flag = true;
        if(S[0].size() == 1){
            break;
        }
        for(int j=0;j<S.size();j++){
            if(S[0][i] != S[j][i]){
                flag = false;
                break;
            }
        }
        flag_W[i] = flag;
    }
    
    for(int i=0;i<S.size();i++){
        if(flag[i])
            continue;
        string tmp;
        for(int j=0;j<S[i].size();j++){
            if(!flag_W[j])
                tmp += S[i][j];
        }
        update.push_back(tmp);
    }
    S = update;
    return update.size() * update[0].size();
}

int main(void){
    int H,W;
    cin >> H >> W;
    vector<string> C(H);
    for(int i=0;i<H;i++)
        cin >> C[i];
    int count = check(C);
    while(true){
        int tmp = check(C);
        if(tmp == count){
            count = tmp;
            break;
        }
        count = tmp;
    }
    cout << count << endl;
    return 0;
}