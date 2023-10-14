#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
    string T;
    cin >> N >> T;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;

    vector<int> matchedIndexes;

    for (int i = 0; i < N; i++)
    {
        if (T.size() == S[i].size())
        {
            int diff = 0;
            for (int j = 0; j < T.size(); ++j)
            {
                if (T[j] != S[i][j])
                    diff++;
            }
            if (diff == 1 || diff == 0)
                matchedIndexes.push_back(i + 1);
        }
        else if (T.size() == S[i].size() - 1)
        {
            int diff = 0, j = 0, k = 0;
            while (j < T.size() && k < S[i].size())
            {
                if (T[j] != S[i][k]){
                    diff++;
                    k++;
                }
                else{
                    j++;
                    k++;
                }
            }
            if (diff <= 1)
                matchedIndexes.push_back(i + 1);
        }
        else if (T.size() == S[i].size() + 1)
        {
            int diff = 0, j = 0, k = 0;
            while (j < T.size() && k < S[i].size())
            {
                if (T[j] != S[i][k])
                {
                    diff++;
                    j++;
                }
                else
                {
                    j++;
                    k++;
                }
            }
            if (diff <= 1)
                matchedIndexes.push_back(i + 1);
        }
    }

    cout << matchedIndexes.size() << endl;
    for (int index : matchedIndexes)
        cout << index << " ";
    cout << endl;

    return 0;
}
