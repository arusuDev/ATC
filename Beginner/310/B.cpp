#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Product{
public:
    int price;
    int fn;
    vector<int> func;
};
int main(void){
    int N,M;
    vector<string> spl;
    cin >> N >> M;
    vector<Product> P(N);
    for(int i=0;i<N;i++){
        int fn;
        cin >> P[i].price;
        cin >> P[i].fn;
        for(int f=0;f<P[i].fn;f++){
            int func_no;
            cin >> func_no;
            P[i].func.push_back(func_no);
        }
    }
    bool flag= false;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            
            // Pi >= Pj でない場合対象ではない
            if(P[i].price < P[j].price){
                continue;
            }
            // j番目の製品がi番目の製品が保つ機能を全て持たない場合
            if(!includes(P[j].func.begin(),P[j].func.end(),P[i].func.begin(),P[i].func.end())){
                continue;
            }
            if(P[i].price> P[j].price || P[i].func.size() < P[j].func.size()){
                flag = true;
            }
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}