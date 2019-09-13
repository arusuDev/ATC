// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int N,K;
    string S;
    cin >> N >> K >> S;
    int l=0;
    int r=N-1;
    char d=S[0];
    for(int iter=0;iter<K;iter++){
        for(int i=l;i<r;i++){
            if(S[i] == d){
                break;
            }
            l++;
        }
        for (int i = r; i > l; i--)
        {
            if (S[i] == d)
            {
                break;
            }
            r--;
        }
        l++;
        for (int i = l; i < r; i++)
        {
            if (S[i] == 'L')
            {
                S[i] = 'R';
            }
            else
            {
                S[i] = 'L';
            }
        }
        if(l>r){
            if (S[r] == 'L')
                S[r] = 'R';
            else
                S[r] = 'L';
            break;
        }
            
        if(d == 'L')
            d = 'R';
        else
            d = 'L';
        cout << "L : " << l << " | R : " << r << endl;
        cout << S << endl;
    }
    cout << "L : " << l << " | R : " << r << endl;
    cout << S << endl;
}