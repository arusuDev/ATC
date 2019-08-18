#include <iostream>
#include <vector>
using namespace std;

int N;

class Node{
    public:
    int counter = 0;
    //int *link;
    vector<int> link;
    bool isLeaf;

    Node(){
        isLeaf = true;
    }
    void linking(int i){
        link.push_back(i);
        //link[i] = 1;
        //葉ではない
        isLeaf = false;
    }
    void print(){
        cout << "Counter : "<< counter;
        cout << endl;
    }
};

void countup(Node* tree,int p,int x){
    tree[p].counter += x;
    if(tree[p].isLeaf){
        return;
    }
    //自分自身のカウンターを増加させる。
    for(int i=0;i<tree[p].link.size();i++){
        countup(tree,tree[p].link[i],x);
    }
    /*
    for(int i=0;i<N;i++){
        if(tree[p].link[i] == 1){
            //自分自身からのリンクが有る場合は、それを呼び出す。
            countup(tree,i,x);
        }
    }
    */

}

int main(void){
    int Q,a,b;
    cin >> N >> Q;
    Node *tree = new Node[N];
    for(int i=0;i<N-1;i++){
        cin >> a >> b;
        //Node番号a-1からb-1への単方向リンク
        tree[a-1].linking(b-1);
    }
    int p,x;
    for(int i=0;i<Q;i++){
        cin >> p >> x;
        countup(tree,p-1,x);
    }
    
    
    for(int i=0;i<N;i++){
        //tree[i].print();
        cout << tree[i].counter << " ";
    }
    cout << endl;
}