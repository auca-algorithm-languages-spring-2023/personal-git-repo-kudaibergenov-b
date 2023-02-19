#include <iostream>
#include <set>
#include <vector>

using namespace std;

string word, concatenation;
vector<string> words;
set<string> newLanguage;

int main()
{
    int t;
    cin >> t;

    for (int x = 1; x <= t; x++)
    {
        cout << "Case " << x << ": ";

        int m, n;
        cin >> m >> n;
        getline(cin, word);

        for (int i = 0; i < m; i++)
        {
            getline(cin, word);
            words.push_back(word);
        }

        for (int i = 0; i < n; i++)
        {
            getline(cin, word);
            for (int j = 0; j < m; j++)
            {
                concatenation = words[j] + word;
                newLanguage.insert( concatenation);
            }
        }

        cout << newLanguage.size() << endl;
        words = vector<string>();
        newLanguage = set<string>();
    }
}