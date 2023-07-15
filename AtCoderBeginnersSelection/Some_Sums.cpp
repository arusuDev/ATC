#include <iostream>

int main(void){
    int N,A,B;
    std::cin >> N >> A >> B;
    int all_sum = 0;
    for(int i=0;i<=N;i++){
        int sum = 0;
        int tmp = i;
        while(tmp != 0){
            sum += tmp % 10;
            tmp /= 10;
        }
        if(sum >= A && sum <= B){
            all_sum += i;
        }
    }
    std::cout << all_sum << std::endl;
    return 0;
}