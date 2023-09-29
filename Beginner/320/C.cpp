#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int T;
    cin >> T;
    vector<string> reel(3);
    vector<vector<int>> checklist(3,vector<int>(10,-1));
    for(auto &r:reel)
        cin >> r;
    
    for(int i=0;i<T;i++){
        for(int r=0;r<3;r++){
            if(checklist[0][reel[r][i]-'0'] == -1){
                checklist[0][reel[r][i]-'0'] = i;
            }else if(checklist[1][reel[r][i]-'0'] == -1){
                checklist[1][reel[r][i]-'0'] = i;
            }else{
                checklist[2][reel[r][i]-'0'] = i;
            }
        }
    }

    for(int i=0;i<10;i++){
        cout << "No." << i << ":";
        for(int j=0;j<3;j++){
            cout << checklist[j][i] << " ";
        }
        cout << endl;
    }
    int min_time = 101;
    for(int i=0;i<10;i++){
        if(checklist[2][i] != -1){
            // i番目の数字が3種類存在する場合
            int r_max = 0;
            for(int r=0;r<3;r++){
                if(r_max < checklist[r][i])
                    r_max = checklist[r][i];
            }
            if(min_time > r_max)
                min_time = r_max;
        }
    }
    if(min_time == 101){
        cout << -1 << endl;
    }else{
        cout << min_time << endl;
    }

    return 0;

}