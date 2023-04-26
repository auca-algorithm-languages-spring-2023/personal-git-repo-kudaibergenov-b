#include <iostream>

using namespace std;

int n, h, nTests;
const char zero = '0', one = '1';

void solve(int length, int hamDis, const string &bits)
{
    if (length != bits.size())
    {
        solve(length, hamDis, bits + zero);
        solve(length, --hamDis, bits + one);
    }
    else
    {
        if (hamDis == 0)
        {
            cout << bits << "\n";
        }
    }
}

int main()
{
    cin >> nTests;

    for (int i = 0; i < nTests; i++)
    {
        string binary;
        cin >> n >> h;

        solve(n, h, binary);

        if (i < nTests - 1)
        {
            cout << "\n";
        }
    }
}