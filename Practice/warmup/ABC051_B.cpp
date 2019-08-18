#include <iostream>
using namespace std;

int main(void){
    int K,S;
    int count = 0;
    cin >> K >> S;
    int temp = 0;
    for(int i=0;i<K;i++){
        temp = i;
        if(temp > S){
            temp -= i;
            break;
        }
        for(int j=0;j<K;j++){
            temp += j;
            if(temp > S){
                temp -= j;
                break;
            }
            for(int k=0;k<K;k++){
                temp += k;
                if(temp == S){
                    count++;
                    temp -= k;
                    break;
                }
                temp -= k;
            }
            temp -= j;
        }
        temp -= i;
    }
    cout << count << endl;
}