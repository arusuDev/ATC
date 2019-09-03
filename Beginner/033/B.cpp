// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

class Town{
    public:
    string name;
    int people,index;
    Town(string n,int p,int i){
        people = p;
        name = n;
        index = i;
    }
    bool operator<(const Town &another) const
    {
        return people < another.people;
    }
};

int main(void){
    int N,sum=0;
    cin >> N;
    //Town* temp = new Town[N];
    string name;
    int people;
    vector<Town> elem;
    for(int i=0;i<N;i++){
        cin >> name >> people;
        elem.push_back(Town(name,people,i));
    }
    sort(elem.begin(),elem.end());
    //sum = accumulate(elem.begin(),elem.end(),0);
    for(int i=0;i<N;i++){
        sum += elem[i].people;
    }
  //      cout << elem[N-1].name << endl;
    if(sum < elem[N-1].people*2)
        cout << elem[N-1].name << endl;
    else
       cout << "atcoder" << endl;
    
    // cout << temp[0].name << temp[0].people << endl;
    // cout << temp[N-1].name << temp[N-1].people << endl;

}