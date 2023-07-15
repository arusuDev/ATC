#include <iostream>

int main(void){
    int A,B,C,X;
    std::cin >> A >> B >> C >> X;
    int count = 0;
    for(int Ai=0;Ai<=A;Ai++){
        for(int Bi=0;Bi<=B;Bi++){
            int price= Ai*500 + Bi*100;
            if(price > X){
                break;
            }
            if((X - price)/50 <= C){
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}