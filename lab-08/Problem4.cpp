#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> fiveNums(5);

bool solve(int a, int b)
{
    if (b == 5)
    {
        if (a == 23)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    ++b;

    return solve(a * fiveNums[b - 1], b) || solve(a - fiveNums[b - 1], b) || solve(a + fiveNums[b -1], b);
}

int main()
{
    for (;;)
    {
        bool fiveZero = false;

        for (int &n : fiveNums)
        {
            cin >> n;
        }

        for (int n : fiveNums)
        {
            if (n == 0)
            {
                fiveZero = true;
            }
        }

        if (fiveZero)
        {
            break;
        }

        sort(begin(fiveNums), end(fiveNums));

        bool isPossible = solve(*begin(fiveNums), 1);

        while (!isPossible && next_permutation(begin(fiveNums), end(fiveNums))) {
            isPossible = solve(*begin(fiveNums), 1);
        }

        if (isPossible)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
}
