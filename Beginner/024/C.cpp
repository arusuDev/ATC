#include <iostream>
using namespace std;

class Restriction{
    public:
    int L,R;
};
class People{
    public:
    int S,T,pos,date;
    bool LR;
    People(){
        date = 0;
    }
    
    void set(){
        pos = S;
        if(S < T){
            //開始地点より目的の都市が右側にあるならば
            LR = true;
        }else{
            LR = false;
        }
    }
};
int main(void){
    int N,D,K;
    cin >> N >> D >> K;
    Restriction* Res = new Restriction[D];
    for(int i=0;i<D;i++){
        cin >> Res[i].L >> Res[i].R;
    }
    People* Des = new People[K];
    for(int i=0;i<K;i++){
        cin >> Des[i].S >> Des[i].T;
        Des[i].set();
    }
/*
    for(int i=0;i<K;i++){
        cout << i << "番目の民族は S:" << Des[i].S << " T:" << Des[i].T << "なので";
        if(Des[i].LR){
            cout << "右側に行きたい。";
        }else{
            cout << "左側に行きたい。";
        }
        cout << endl;
    }
*/
    for(int i=0;i<K;i++){
        for(int d=0;d<D;d++){
            //cout << "民族" << i << " 日付 " << d << "　位置　" << Des[i].pos <<" 制限　左　" << Res[d].L << " 制限　右　" << Res[d].R << endl;
            if(Des[i].pos < Res[d].L || Des[i].pos > Res[d].R){
                // 範囲外にいるのであればその日は動くことができない。
                continue;
            }
            // 範囲内にいるのであれば、移動する。
            if(Des[i].LR && Des[i].pos < Res[d].R){
                //右側に移動したい場合。
                if(Res[d].R >= Des[i].T){
                    Des[i].pos = Des[i].T;
                }else{
                    Des[i].pos = Res[d].R;
                }
            }else if(!Des[i].LR && Des[i].pos > Res[d].L){
                // 左側に移動したい場合
                if(Res[d].L <= Des[i].T){
                    Des[i].pos = Des[i].T;
                }else{
                    Des[i].pos = Res[d].L;
                }
            }

            if(Des[i].pos == Des[i].T){
                //移動した結果、目的地にいるのであれば今の日数を記録。
                Des[i].date = d+1;
                break;
            }
        }
    }

    for(int i=0;i<K;i++){
        cout << Des[i].date << endl;
    }

    delete Res;
    delete Des;
}