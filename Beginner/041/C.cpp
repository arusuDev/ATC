// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Student{
    public:
    int num;
    int height;

    bool operator<(const Student &another) const
    {
        return height < another.height;
    }
};
int main(void){
    int N;
    cin >> N;
    vector<Student> a(N);
    for(int i=0;i<N;i++){
        a[i].num = i;
        cin >> a[i].height;
    }
    sort(a.begin(),a.end());
    for(int i=N-1;i>=0;i--){
        cout << a[i].num+1 << endl;
    }
}