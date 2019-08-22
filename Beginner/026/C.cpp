// C++のテンプレート
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Employee{
    public:
    int salary,No,boss,min,max;
    bool leaf;
    Employee(){
        min = -1;
        max = 0;
        leaf = true;
    }
    void setSub(int sal){
        leaf = false;
        if(min == -1){
            min = sal;
        }
        if(min > sal){
            min = sal;
        }
        if(max < sal){
            max = sal;
        }
    }
    void calcSal(){
        if(leaf){
            salary = 1;
        }else{
            salary = max + min + 1;
        }
    }
};

bool cmp(Employee &a,Employee &b){
    return a.boss < b.boss;
}

int main(void){
    int N;
    cin >> N;
    Employee* B = new Employee[N];
    B[0].No = 1;
    B[0].boss = -1;//高橋くんがボス 
    for(int i=1;i<N;i++){
        B[i].No = i+1;
        cin >> B[i].boss;
    }
    for(int i=N-1;i>0;i--){
        //cout << "社員番号：" << i;
        B[i].calcSal();
        //cout << "給料　：　" << B[i].salary << "上司　：　" << B[i].boss << endl;

        B[B[i].boss-1].setSub(B[i].salary);
    }
    B[0].calcSal();
    cout << B[0].salary << endl;
    
    delete B;
}