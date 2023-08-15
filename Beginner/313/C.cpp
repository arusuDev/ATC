#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void){
    long long N;
    cin >> N;
    vector<long long> A(N);
    for(auto &a:A)
        cin >> a;
    long long min= *min_element(A.begin(),A.end());
    long long max= *max_element(A.begin(),A.end());
    long long ave_min_max = (max-min)/2LL;
    vector<long long> diff_min(N);
    for(int i=0;i<N;i++)
        diff_min[i] = A[i]-ave_min_max;
    // for(auto m:diff_min)
        // cout << m << " ";
    long long diff_sum = accumulate(diff_min.begin(),diff_min.end(),0);
    long long ave = ave_min_max + (long long)diff_sum/N;
    // cout << "Ave:" << ave << endl;
    long long minus_sum=0,plus_sum=0;
    for(int i=0;i<N;i++){
        if(A[i] <= ave){
            // cout << ave - A[i] << " ";
            plus_sum += (ave - A[i]);
        }else{
            // cout << ave+1 - A[i] << " ";
            minus_sum += (ave+1-A[i]);
        }
    }
    // cout << endl << plus_sum << ":" << minus_sum << endl;
    if(abs(plus_sum) > abs(minus_sum)){
        cout << abs(plus_sum) << endl;
    }else{
        cout << abs(minus_sum) << endl;
    }
    return 0;
}