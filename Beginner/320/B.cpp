#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    string S;
    cin >> S;
    int max_length = 0;
    for(int i=0;i<S.size();i++){
        for(int j=i;j<S.size();j++){
            string tmp = S.substr(i,j-i+1);
            string rvs = S.substr(i,j-i+1);
            reverse(rvs.begin(),rvs.end());
            // cout << tmp << ":";
            // cout << rvs << endl;
            if(tmp==rvs){
                // cout << tmp << ":" << rvs << "|" << tmp.size() << endl;
                if(max_length < tmp.size())
                    max_length = tmp.size();
            }
        }
    }
    cout << max_length << endl;
    return 0;

}