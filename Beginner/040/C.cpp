#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void){
    //後ろから数えたほうがいいかも？
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++)
        cin >> a[i];
    int cost=0,i;
    for(i=N-1;i>2;){
        if(abs(a[i]-a[i-1]) < abs(a[i]-a[i-2])){
            // cout << 1<<":" <<abs(a[i]-a[i-1]) << ":" <<abs(a[i]-a[i-2]) << endl;
            cost += abs(a[i]-a[i-1]);
            i = i-1;
        }else{
            //cout << 2<<":" <<abs(a[i]-a[i-1]) << ":" <<abs(a[i]-a[i-2]) << endl;            
            cost += abs(a[i]-a[i-2]);
            i = i-2;
        }
    }
    
    if(i==1){
        cost += abs(a[1]-a[0]);
    }else{
        cost += abs(a[2]-a[0]);
    }
    cout << cost << endl;
    return 0;
}