#include <iostream>
#include <vector>

int main(void){
    int N;
    std::cin >> N;
    std::vector<int> t(N),x(N),y(N);
    int x_pos=0,y_pos=0,time=0;

    for(int i=0;i<N;i++){
        std::cin >> t[i] >> x[i] >> y[i];
    }
    for(int i=0;i<N;i++){
        int dist = abs(x[i]-x_pos) + abs(y[i]-y_pos);
        int move_time = t[i] - time;
        if(abs(dist-move_time) % 2 == 1 || move_time < dist){
            std::cout << "No" << std::endl;
            return 0;
        }else{
            x_pos = x[i];
            y_pos = y[i];
            time = t[i];
        }
    }
    std::cout << "Yes" << std::endl;
    return 0;
}