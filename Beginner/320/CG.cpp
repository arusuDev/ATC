#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int M;
    cin >> M;
    vector<string> reel(3);
    for(auto &r:reel)
        cin >> r;

    int result = 3 * M + 1; // 初期値として最大可能な秒数をセット

    for (int num = 0; num < 10; ++num) { 
        vector<vector<int>> times(3);
        for (int r = 0; r < 3; ++r) {
            size_t pos = 0;
            while ((pos = reel[r].find('0' + num, pos)) != string::npos) {
                times[r].push_back(pos);
                pos++;
            }
        }

        for (int t1 : times[0]) {
            for (int t2 : times[1]) {
                for (int t3 : times[2]) {
                    if (t1 == t2) t2 += M;
                    if (t1 == t3) t3 += M;
                    if (t2 == t3) t3 += M;

                    int maxTime = max({t1, t2, t3});
                    result = min(result, maxTime);
                }
            }
        }
    }

    if (result == 3 * M + 1) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
