#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void print(const stack<int> &s)
{
    if (s.empty()) {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }
}


void marsh(int n, vector<int> v)
{
    stack<int> coaches;

    for (int t = 1, j = 0; t <= n; t++)
    {
        coaches.push(t);

        while (!coaches.empty() && v[j] == coaches.top() && j < n)
        {
            coaches.pop();
            j++;
        }
    }

    print(coaches);
}

void reorganize(int n)
{
    vector<int> v(n);

    for (;;)
    {
        cin >> v[0];

        if (v[0] == 0)
        {
            cout << '\n';
            break;
        }

        for (int i = 1; i < n; i++)
        {
            cin >> v[i];
        }

        marsh(n, v);
    }
}

int main()
{
    for (;;)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        reorganize(n);
    }
}