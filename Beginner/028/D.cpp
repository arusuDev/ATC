// C++のテンプレート
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(void){
    int N,K;
    cin >> N >> K;
    //(K以下,K,K以上)の組み合わせが出るパターンを考えればいいはず。
    // Kが出る確率は、1/Nの確率。Kよりおおきい数が出る確率は、N-K/N,K未満が出る確率はK-1/Nである。
    double K_p = 1/double(N);
//    cout << setprecision(10) << "K : " << K_p << endl;
    double Km_p = (K-1)/double(N);
//    cout << setprecision(10) << "Km : " << Km_p << endl;
    double Kp_p = (N-K)/double(N);
//    cout << setprecision(10) << "Kp : " << Kp_p << endl;
    cout << setprecision(10) << (K_p * Kp_p * Km_p*6 + K_p * K_p * K_p + K_p * K_p * Km_p*3 + Kp_p*K_p*K_p * 3) << endl;
}