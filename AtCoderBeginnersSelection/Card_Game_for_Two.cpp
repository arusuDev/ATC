#include<iostream>
#include<vector>
#include<algorithm>

int main(void){
    int N;
    std::cin >> N ;
    std::vector<int> a(N);
    for(int i=0;i<N;i++){
        std::cin >> a[i];
    }
    std::sort(a.begin(),a.end(),[](const int& a,const int& b){ return a > b;});
    
    int score =0;
    for(int i=0;i<N;i++){
        if(i%2 == 0){
            score += a[i];
        }else{
            score -= a[i];
        }
    }
    std::cout << score << std::endl;
    return 0;
}