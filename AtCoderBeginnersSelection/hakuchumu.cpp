#include <iostream>
#include <string>

bool check(std::string s,int index){
    if(s.size()==index){
        return true;
    }
    if(s.substr(index,6) == "eraser"){
        if(check(s,index+6)){
            return  true;
        }
    }
    if(s.substr(index,7) == "dreamer"){
        if(check(s,index+7)){
            return true;
        }
    }
    if(s.substr(index,5) == "dream" || s.substr(index,5) == "erase"){
        if(check(s,index+5)){
            return true;
        }
    }
    return false;
}

int main(void){
    std::string s;
    std::cin >> s;
    if(check(s,0)){
        std::cout << "YES" << std::endl;
    }else{
        std::cout << "NO" << std::endl;
    }
    return 0;
}