#include <iostream>
#include <string>
#include <regex>

int main(void){
    std::string s;
    std::cin >> s;

    s = std::regex_replace(s,std::regex("eraser"),"");
    s = std::regex_replace(s,std::regex("erase"),"");
    s = std::regex_replace(s,std::regex("dreamer"),"");
    s = std::regex_replace(s,std::regex("dream"),"");

    if(s == ""){
        std::cout << "YES" << std::endl;
    }else{
        std::cout << "NO" << std::endl;
    }
    return 0;
}