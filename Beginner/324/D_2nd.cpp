#include <iostream>
#include <unordered_map>
#include <cmath>
#include <set>

using namespace std;

bool canFormFrom(const string &num, const unordered_map<char, int> &freq)
{
    unordered_map<char, int> numFreq;
    // 平方数を文字列に変換して、unordered_mapに突っ込む
    for (char c : num)
    {
        numFreq[c]++;
    }

    for (auto &p : numFreq)
    {
        if (freq.find(p.first) == freq.end() || freq.at(p.first) < p.second)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    string S;
    cin >> N >> S;

    unordered_map<char, int> freq;
    for (char c : S)
    {
        freq[c]++;
    }

    // 入力可能な値までの平方数を作れるか判定する
    long long limit = sqrt(pow(10, N) - 1);
    set<long long> validSquares;

    for (int i = 1; i <= limit; i++)
    {
        long long square = (long long)i * i;
        if (canFormFrom(to_string(square), freq))
        {
            validSquares.insert(square);
        }
    }

    cout << validSquares.size() << endl;
    return 0;
}
