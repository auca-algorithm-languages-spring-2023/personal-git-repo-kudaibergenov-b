#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<string> dictionary(101), word(257), digits = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

void solve(size_t index, string rule)
{
    if (index == rule.size())
    {
        for (int i = 0; i < index; i++)
        {
            cout << word[i];
        }

        cout << endl;
    }
    else
    {
        if (rule[index] == 35)
        {
            for (int i = 0; i < n; i++)
            {
                word[index] = dictionary[i];
                solve(index + 1, rule);
            }
        }
        else
        {
            for (const auto & digit : digits)
            {
                word[index] = digit;
                solve(index + 1, rule);
            }
        }
    }
}

int main()
{
    while (cin >> n && n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> dictionary[i];
        }

        cout << "--" << endl;

        cin >> m;

        while (m--)
        {
            string r;
            cin >> r;
            solve(0, r);
        }
    }
}