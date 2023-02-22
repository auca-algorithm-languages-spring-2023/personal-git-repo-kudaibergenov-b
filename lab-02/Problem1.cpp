#include <iostream>
#include <list>

using namespace std;

int t;
string line;

int main()
{
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        list<char> final;
        auto it = begin(final);

        getline(cin, line);

        for (auto letter : line)
        {
            if (letter == '[')
            {
                it = begin(final);
            }
            else if (letter == ']')
            {
                it = end(final);
            }
            else if (letter == '<')
            {
                if (it != begin(final))
                {
                    it = final.erase(--it);
                }
            }
            else
            {
                it = final.insert(it, letter);
                ++it;
            }
        }

        for (auto c : final)
        {
            cout << c;
        }

        cout << '\n';
    }
}