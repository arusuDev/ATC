#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i=0; i<N; i++)
        cin >> A[i];
    
    sort(A.begin(), A.end());
    long long min_counter = 0, max_counter = N-1;
    long long ops = 0;

    while(min_counter <= max_counter) {
        if(A[max_counter]-A[min_counter] > 1) {
            if(A[max_counter]-A[min_counter+1] > A[max_counter-1]-A[min_counter]) {
                ops += A[max_counter]-A[min_counter] - 1;
                A[max_counter] = A[min_counter] + 1;
                min_counter++;
            } else {
                ops += A[max_counter]-A[min_counter] - 1;
                A[min_counter] = A[max_counter] - 1;
                max_counter--;
            }
        } else {
            break;
        }
    }
    cout << ops << endl;
    return 0;
}
