#include <iostream>
#include <unordered_set>

int main(void){
    int N;
    std::cin >> N;
    std::unordered_set<int> a;

    for(int i=0;i<N;i++){
        int tmp;
        std::cin >> tmp;
        a.insert(tmp);
    }
    std::cout << a.size() << std::endl;
    return 0;
}