#include <iostream>
#include <set>

using namespace std;

string words;
set<string> dictionary;

int main()
{
    while (cin >> words)
    {
        string word;
        for (char c : words)
        {
            char letter = tolower(c);
            if (letter >= 97 && letter <= 122)
            {
                word += letter;
            }
            else if (!word.empty())
            {
                dictionary.insert(word);
                word = "";
            }
        }

        if (!word.empty())
        {
            dictionary.insert(word);
        }
    }

    for (auto const &w : dictionary)
    {
        cout << w << endl;
    }
}