#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    string text;

    while (getline(cin, text))
    {
        list<char> beijuText;
        auto it = beijuText.begin();

        for (auto const ch : text)
        {
            if (ch == '[')
            {
                it = beijuText.begin();
            }
            else if (ch == ']')
            {
                it = beijuText.end();
            }
            else
            {
                beijuText.insert(it, ch);
            }
        }

        for (auto const e : beijuText)
        {
            cout << e;
        }

        cout << '\n';
    }
}