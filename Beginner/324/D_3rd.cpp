#include <iostream>
#include <unordered_map>
#include <cmath>
#include <set>

using namespace std;

unordered_map<char, int> freq;
set<long long> uniqueSquares;
const char squareEndings[] = {'0', '1', '4', '5', '6', '9'};

bool isSquare(long long n)
{
    long long sq = sqrt(n);
    return sq * sq == n;
}

void generateRemainingNumbers(long long current, int length, const int &N)
{
    if (length == N)
    {
        if (isSquare(current))
        {
            uniqueSquares.insert(current);
        }
        return;
    }

    for (auto &p : freq)
    {
        if (p.second > 0)
        {
            p.second--;
            generateRemainingNumbers(current * 10 + (p.first - '0'), length + 1, N);
            p.second++;
        }
    }
}

void generateNumbersWithSpecificEnding(char ending)
{
    freq[ending]--;
    for (auto &p : freq)
    {
        if (p.second > 0)
        {
            p.second--;
            generateRemainingNumbers((p.first - '0') * 10 + (ending - '0'), 2, 13);
            p.second++;
        }
    }
    freq[ending]++;
}

int main()
{
    int N;
    string S;
    cin >> N >> S;

    for (char c : S)
    {
        freq[c]++;
    }

    for (char c : squareEndings)
    {
        if (freq[c] > 0)
        {
            generateNumbersWithSpecificEnding(c);
        }
    }

    cout << uniqueSquares.size() << endl;
    return 0;
}
