#include <iostream>
#include <set>
#include <vector>

using namespace std;

vector<string> first(1501), second(1501);
set<string> newLanguage;
string concatenation;

int main()
{
    int t;
    cin >> t;

    for (int x = 1; x <= t; x++)
    {
        int m, n;
        cin >> m >> n;

        for (int i = 0; i < m; i++)
        {
            cin >> first[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> second[i];
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                concatenation = first[i] + second[j];
                newLanguage.insert(concatenation);
            }
        }

        cout << "Case " << x << ": " << newLanguage.size() << endl;
        newLanguage.clear();
    }
}