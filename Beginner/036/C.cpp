// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Data{
    public:
    int index;
    int data;
    int s;
    bool operator< (const Data &another) const{
        return data < another.data;
    }
    Data(int i,int d,int sort){
        index = i;
        data = d;
        s=sort;
    }
};

int main(void){
    int N;
    cin >> N;
    vector<Data> a;
    vector<Data> b;
    int temp;
    for(int i=0;i<N;i++){
        cin >> temp;
        a.push_back(Data(i, temp,0));
    }
    sort(a.begin(),a.end());
    
    a[0].s = 0;
    for(int i=1;i<N;i++){
        if(a[i-1].data==a[i].data)
            a[i].s = a[i-1].s;
        else
            a[i].s = a[i-1].s+1;
    }
    for (int i = 0; i < N; i++)
    {
        //cout << a[i].index << ":" << a[i].data << ":" << a[i].s <<endl;
        b.push_back(Data(a[i].data,a[i].index,a[i].s));
    }
    sort(b.begin(),b.end());
    for(int i=0;i<N;i++){
        cout << b[i].s << endl;
    }
}