#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(void){
    int N,D;
    cin >> N >> D;
    vector<string> s(N);
    vector<bool> tf(D);

    string a;
    for(auto& str:s){
        cin >> str;
    }
    for(int i=0;i<D;i++){
        tf[i] = true;
    }

    for(int d=0;d<D;d++){
        for(int i=0;i<N;i++){
            if(s[i][d] == 'x'){
                //だめな日があったらfalseとする
                tf[d]=false;
                break;
            }
        }
    }
    int m_count=0,count=0;
    
    for(int i=0;i<tf.size();i++){
        if(tf[i]){
            count++;
        }else{
            count = 0;
        }
        if(m_count < count){
            m_count = count;
        }
    }
    cout << m_count << endl;
    return 0;
    
}