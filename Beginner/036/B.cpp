// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<string> s(N);
    for(int i=0;i<N;i++)
        cin >> s[i];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<s[N-j-1][i];
        }
        cout << endl;
    }
}