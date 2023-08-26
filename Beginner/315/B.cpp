#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
    int M;
    cin >> M;
    vector<int> D(M);
    int allDay = 0;
    for(auto &d:D){
        cin >> d;
        allDay += d;
    }
    int mid = (allDay+1) / 2;
    int m_idx = 0;
    while(mid > 0){
        if(mid - D[m_idx] <= 0){
            m_idx++;
            break;  
        }
        mid -= D[m_idx];
        m_idx++;
    }
    cout << m_idx << " " << mid << endl;
    return 0;
}