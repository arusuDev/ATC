// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Info{
    public:
    int x;
    int y;
};
int main(void){
    int N,M;
    cin >> N >> M;
    vector<Info> infomation(M);
    for(int i=0;i<M;i++){
        cin >> infomation[i].x >> infomation[i].y;
    }
    vector<int> a;
    vector<int> check(N);
    for(int i=0;i<N;i++){
        check[i] = -1;
    }

    for(int i=0;i<M;i++){
        if(check[infomation[i].x-1] == -1){
            //infomation[i]がまだ出てきてないなら、aに追加
            a.push_back(infomation[i].x);
            cout << "aの長さは" << a.size() << "X" << endl;
            check[infomation[i].x-1] = a.size()-1;
        }else{
            //与えられた値がすでにあるならば、yの位置を見て、
            if(check[infomation[i].y-1] == -1){
                //現在yがないのならば、自分の位置の一個後ろに挿入する。
                a.insert(infomation[i].y,check[infomation[i].x-1]+1);
                check[infomation[i].y - 1] = check[infomation[i].x-1]+1;
            }else{
                //yがあるならば、yのいちを見て、
                if(check[infomation[i].x-1] > check[infomation[i].y-1]){
                    //xのほうが大きいなら、今の位置を削除して、
                    a.erase(check[infomation[i].x-1]);
                    for(int i=check[infomation[i].y-1];i<infomation[i].x-1;i++){
                        check[i]++;
                    }
                    a.insert(infomation[i].x,check[infomation[i].y-1]);
                }
            }
        }
        if(check[infomation[i].y-1] == -1){
            a.push_back(infomation[i].y);
            cout << "aの長さは" << a.size() << "Y" << endl;
            check[infomation[i].y-1] = a.size()-1;
        }else{

        }
    }
    cout 
}