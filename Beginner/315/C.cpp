#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Ice
{
public:
    int F;
    int S;
};

int main(void){
    int N;
    cin >> N;
    vector<Ice> ice(N);
    for(int i=0;i<N;i++)
        cin >> ice[i].F >> ice[i].S;
    sort(ice.begin(),ice.end(),[](const Ice &a,const Ice &b){
        return a.S > b.S;
    });

    int othIce = 1;
    for(;othIce<ice.size();othIce++){
        if(ice[othIce].F != ice[0].F){
            break;
        }  
    }
    if((ice[1].S/2) <= ice[othIce].S)
        cout << ice[0].S + ice[othIce].S << endl;
    else   
        cout << ice[0].S + ice[1].S/2 << endl;
    return 0;
}