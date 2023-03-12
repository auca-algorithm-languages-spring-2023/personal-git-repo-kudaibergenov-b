#include <iostream>
#include <sstream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int t;
    string line;

    getline(cin, line);

    istringstream input(line);
    input >> t;

    getline(cin, line);

    for (int c = 0; c < t; c++)
    {
        vector <string> fv;
        map<string, int> m;

        while (getline(cin, line) && line.size())
        {
            input.clear();
            input.str(line);

            string f;
            input >> f;

            fv.push_back(f);
        }

        for (int i = 0; i < fv.size(); i++)
        {
            for (int j = ++i; j < fv.size(); j++)
            {
                m[fv[i] + fv[j]]++;
                ++m[fv[j] + fv[i]];
            }
        }

        auto it1(begin(m));

        auto it2(begin(m));

        while (it1 != end(m))
        {
            if ((*it1).second > (*it2).second)
            {
                it2 = it1;
            }

            it1++;
        }

        cout << (*it2).first << "\n";

        if (c < t - 1)
        {
            cout << "\n";
        }
    }
}