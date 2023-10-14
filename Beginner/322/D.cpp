#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 4;
typedef vector<string> Polyomino;

Polyomino rotate(const Polyomino &p){
    Polyomino rotated(N,string(N,'.'));
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            rotated[j][N-1-i] = p[i][j];
    return rotated;
}

bool canFit(const Polyomino &grid, const Polyomino &p, int x, int y)
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (p[i][j] == '#' && (x + i >= N || x + i < 0 || y + j >= N || y + j < 0 || grid[x + i][y + j] == '#'))
                return false;
    return true;
}

Polyomino placePolyomino(const Polyomino &grid, const Polyomino &p, int x, int y)
{
    Polyomino newGrid = grid;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (p[i][j] == '#')
            {
                newGrid[x + i][y + j] = '#';
            }
        }
    }
    return newGrid;
}

Polyomino normalize(const Polyomino &p)
{
    int minX = N, minY = N, maxX = -1, maxY = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (p[i][j] == '#')
            {
                minX = min(minX, i);
                minY = min(minY, j);
                maxX = max(maxX, i);
                maxY = max(maxY, j);
            }
        }
    }

    // 正規化して配置
    Polyomino norm(N, string(N, '.'));
    for (int i = minX; i <= maxX; i++)
    {
        for (int j = minY; j <= maxY; j++)
        {
            norm[i - minX][j - minY] = p[i][j];
        }
    }
    return norm;
}

bool solve(Polyomino grid, vector<Polyomino> polyominoes)
{
    if (polyominoes.empty())
    {
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j)
            {
                if (grid[i][j] == '.')
                    return false;
            }
        }
        return true;
    }

    for (size_t idx = 0; idx < polyominoes.size(); idx++)
    {
        Polyomino current = polyominoes[idx];
        current = normalize(current);

        for (int rot = 0; rot < 4; ++rot)
        {
            for (int x = 0; x < N; ++x)
            {
                for (int y = 0; y < N; ++y)
                {
                    if (canFit(grid, current, x, y))
                    {
                        auto newPolyominoes = polyominoes;
                        newPolyominoes.erase(newPolyominoes.begin() + idx);
                        if (solve(placePolyomino(grid, current, x, y), newPolyominoes))
                        {
                            return true;
                        }
                    }
                }
            }
            current = rotate(current);
        }
    }
    return false;
}

int main(void){
    vector<Polyomino> polyominoes(3,vector<string>(4,""));
    int countHash = 0;
    for(int i=0;i<12;i++){
        string tmp;
        cin >> tmp;
        countHash += count(tmp.begin(),tmp.end(),'#');
        polyominoes[i/4][i%4] = tmp;
    }
    if(countHash != 16){
        cout << "No" << endl;
        return 0;
    }


    Polyomino grid(N, string(N, '.'));

    if (solve(grid, polyominoes))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}