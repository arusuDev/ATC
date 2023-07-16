#include<iostream>

int main(void){
    int N,P,Q;
    std::cin >> N >> P >> Q;
    int min = 1000000;
    for(int i=0;i<N;i++){
        int tmp;
        std::cin >> tmp;
        if(min > tmp)
            min = tmp;
    }

    if(min + Q < P){
        std::cout << min+Q << std::endl;
    }else{
        std::cout << P << std::endl;
    }
    return 0;

}