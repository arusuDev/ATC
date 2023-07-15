#include <iostream>

int main(void){
    long long N,Y;
    std::cin >> N >> Y;
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N-i;j++){
            int th_n = N-i-j;
            long long price = 10000*i+5000*j+1000*th_n;

            if(price == Y){
                std::cout << i << " " << j << " " << th_n << std::endl;
                return 0;
            }
        }
    }

    std::cout << "-1 -1 -1" << std::endl;
    return 0;
}