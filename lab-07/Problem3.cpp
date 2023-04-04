#include <iostream>
#include <cstdio>
#include <iomanip>
#include <map>

using namespace std;

int main()
{
    int nTests;
    cin >> nTests;

    getc(stdin);
    getc(stdin);

    for (int i = nTests - 1; i >= 0; --i)
    {
        map <string, int> trees;
        int counter = 0;
        string tree;

        while (getline(cin, tree))
        {
            if (!tree.empty())
            {
                ++trees[tree];
                ++counter;
            }
            else
            {
                break;
            }
        }

        for (const auto& t : trees)
        {
            double percentage = t.second  * (double) 100 / counter;

            cout << fixed << setprecision(4) << t.first << " " << percentage << "\n";
        }

        if (i != 0)
        {
            cout << "\n";
        }
    }
}