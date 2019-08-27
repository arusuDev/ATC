// C++のテンプレート
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    double n_dir,m_dir;
    m_dir = m*6;
    n_dir = (n%12)*30 + m*0.5;
    if(m_dir > n_dir)
        if(m_dir-n_dir > 180){
            cout << 360 - m_dir + n_dir << endl;
        }else{
            cout << m_dir - n_dir << endl;
        }
    else if(m_dir < n_dir)
        if(n_dir-m_dir > 180){
            cout << 360 - n_dir + m_dir << endl;
        }else{
            cout << n_dir - m_dir << endl;
        }
    else
        cout << 0 << endl;
}