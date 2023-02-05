#include <iostream>
#include <stack>
#include <vector>

using namespace std;

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

        for (;;)
        {
            vector<int> v(n);
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

            int t = v[v.size() - 1];
            stack<int> station;

            while (station.size() < n)
            {
                station.push(t);

                if (t > v[0])
                {
                    t--;
                }
                else if (t < v[0])
                {
                    t++;
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (station.top() == v[j])
                {
                    station.pop();
                }
            }

            if (station.empty())
            {
                cout << "Yes" << '\n';
            }
            else
            {
                cout << "No" << '\n';
            }
        }
    }
}