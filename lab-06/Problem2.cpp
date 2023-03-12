#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    map<string, string> dictionary;
    string s, foreign, english;
    stringstream input;

    while (getline(cin, s) && !s.empty())
    {
        input.clear();
        input << s;

        input >> english >> foreign;

        dictionary[foreign] = english;
    }

    while (cin >> foreign)
    {
        auto iter = dictionary.find(foreign);

        if (iter == end(dictionary))
        {
            cout << "eh" << '\n';
        }
        else
        {
            cout << iter->second << '\n';
        }
    }
}