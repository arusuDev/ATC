#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<vector<int>> arr(3,vector<int>(3));
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> arr[i][j];
    
    for(int i=0;i<9;i++){
        cout << arr[i/3][i%3] << " ";
        if((i+1)%3==0)
            cout << endl;
    }
}