#include <iostream>
#include <string>
using namespace std;

int abc(int iter,int len,string s,string str = ""){
    if(str.length()>len){
        return -1;
    }
    if(iter==0){
        str = "b";
    }else{
        switch(iter%3){
            case 0:
                str = "b" + str + "b";
                break;
            case 1:
                str = "a" + str + "c";
                break;
            case 2:
                str = "c" + str + "a"; 
                break;
        }
    }

    if(s == str){
        return iter;
    }else{
        iter++; 
        return abc(iter,len,s,str);
    }
}

int main(void){
    int N;
    string S;
    cin >> N >> S;
    cout << abc(0,N,S) << endl;
}