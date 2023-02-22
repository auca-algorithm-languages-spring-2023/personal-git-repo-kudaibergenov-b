#include <iostream>
#include <list>

using namespace std;

int t;
string line;
list<char> final;
auto it = begin(final);

int main()
{
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
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
            else if (letter == '<' && it != begin(final))
            {
                it = final.erase(--it);
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

        it = begin(final);
        final.clear();
        cout << '\n';
    }
}