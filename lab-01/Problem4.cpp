#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
   string command;
   stack<string> names;

   string t;
   getline(cin, t);

   int n = stoi(t);

   while (n--)
   {
        getline(cin, command);

        if (command == "Kick")
        {
            if (!names.empty())
            {
                names.pop();
            }
        }
        else if (command == "Test")
        {
            if (!names.empty())
            {
                cout << names.top() << '\n';
            }
            else
            {
                cout << "Not in a dream" << '\n';
            }
        }
        else
        {
            string name = command.substr(6);
            names.push(name);
        }
   }
}
