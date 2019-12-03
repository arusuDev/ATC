#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n,x;
    cin >> n >> x;
    if(n/2>=x){
        cout << x-1 << endl;
    }
    else{
        cout << n-x << endl;
    }
    return 0;
}