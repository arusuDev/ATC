#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printRoot(int v,int start,const vector<int> A,int nest,vector<int> &ans){
    if(A[v] == start){
        ans.push_back(v+1);
        return;
    }
    printRoot(A[v],start,A,nest+1,ans);
    ans.push_back(v+1);
}
bool dfs(int v,int start,const vector<int> A,vector<bool> visited){
    if(visited[A[v]]){
        return false;
    }
    visited[A[v]] = true;
    // cout << "check : " << v << ":" << A[v] << endl;
    if(A[v] == start){
        // cout << "detected : "<< A[v] << endl;
        vector<int> ans;
        printRoot(A[v],start,A,0,ans);
        cout << ans.size() << endl;
        reverse(ans.begin(),ans.end());
        cout << ans[0];
        for(int i=1;i<ans.size();i++){
            cout << " " << ans[i];
        }
        return true;
    }
    return dfs(A[v],start,A,visited);
}

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    for(auto& a:A){
        cin >> a;
        a--;
    }

    // すべての頂点から、閉路を探索する（自分自身に帰ってくるか？）
    for(int i=0;i<N;i++){
        vector<bool> visited(N,false);
        if(dfs(i,i,A,visited)){
            break;
        }
    }

    return 0;
}