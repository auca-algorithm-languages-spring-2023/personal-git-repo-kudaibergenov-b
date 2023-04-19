#include <iostream>
#include <vector>

using namespace std;

size_t nTests, m, n, M, N, x, y;
vector<int> ShiftN = {0, -1, 0}, ShiftM = {-1, 0, 1};

string letters = "IEHOVA#", net[9];
vector<string> shifts = {"left", "forth", "right"}, res(9);

bool solve(size_t index, size_t a, size_t b)
{
    if (net[b][a] == 35)
    {
        for (int i = 0; i < index; i++)
        {
            if (i == 0)
            {
                cout << res[i];
            }
            else
            {
                cout << " " << res[i];
            }

            if (i == index - 1)
            {
                cout << endl;
            }
        }

        return true;
    }
    else if (index == letters.size())
    {
        return false;
    }

    for (int j = 0; j < 3; j++)
    {
        y = ShiftN[j] + b;
        x = ShiftM[j] + a;

        if (letters[index] == net[y][x])
        {
            if (x >= 0 && y >= 0 && x < m && y < n)
            {
                res[index] = shifts[j];
                ++index;

                if (solve(index, x, y))
                {
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{
    cin >> nTests;

    for (int i = 0; i < nTests; i++)
    {
        cin >> n >> m;

        for (int j = 0; j < n; j++)
        {
            cin >> net[j];

            for (int k = 0; k < m; k++)
            {
                if (net[j][k] == 64)
                {
                    N = j;
                    M = k;
                }
            }
        }

        solve(0, M, N);
    }
}