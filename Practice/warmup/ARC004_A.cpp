#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int *x = new int[N];
    int *y = new int[N];
    for(int i=0;i<N;i++){
        cin >> x[i];
        cin >> y[i];
    }
    int dist=0,temp;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            temp = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            if(dist < temp)
                dist = temp;
        }
    }
    cout << sqrt(dist) << endl;
    
    delete x;
    delete y;
}