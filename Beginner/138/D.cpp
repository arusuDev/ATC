#include <iostream>
#include <vector>
using namespace std;

int N;

class Node{
    public:
    int counter = 0;
    int add = 0;//この頂点より下はこの値が加算される。
    //int *link;
    vector<int> link;

    void linking(int i){
        link.push_back(i);
    }
};

Node tree[200000];

//毎回すべての木を捜査すると間に合わないっていうことだと思う。
void countup(int p,int x){
    tree[p].counter += x;
    if(tree[p].link.empty()){
        return;
    }
    //自分自身のカウンターを増加させる。
    for(int i=0;i<tree[p].link.size();i++){
        countup(tree[p].link[i],x);
    }
}

void sumup(int pos,int x){
    //ここの木より下にはこの値を足す。
    x += tree[pos].add;
    //自分自身をこの値にする。
    tree[pos].counter = x;

    if(tree[pos].link.empty()){
        //ここが葉なら終了
        return;
    }

    for(int i=0;i<tree[pos].link.size();i++){
        sumup(tree[pos].link[i],x);
    }
}

int main(void){
    int Q,a,b;
    cin >> N >> Q;
    for(int i=0;i<N-1;i++){
        cin >> a >> b;
        //Node番号a-1からb-1への単方向リンク
        tree[a-1].linking(b-1);
    }
    int p,x;
    for(int i=0;i<Q;i++){
        cin >> p >> x;
        tree[p-1].add += x;
        //countup(p-1,x);
    }
    sumup(0,0);
    
    for(int i=0;i<N;i++){
        cout << tree[i].counter << " ";
    }
    cout << endl;
}