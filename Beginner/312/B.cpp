#include  <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
    int N,M;
    cin >> N >> M;
    vector<string> code(N);
    for(auto &c:code){
        cin >> c;
    }

    for(int y=0;y<N-8;y++){
        for(int x=0;x<M-8;x++){
            bool flag = true;
            for(int i=0;i<3;i++){
                if(!(code[y+i].substr(x,4) == "###.")){
                    flag = false;
                    break;
                } 
            }
            for(int i=0;i<3;i++){
                if(!(code[y+6+i].substr(x+5,4) == ".###")){
                    flag = false;
                    break;
                } 
            }
            if(flag){
                cout << y+1 << " " << x+1 << endl;
            }
        }
    }
    return 0;
}