#include <iostream>
#include <map>
#include <vector>

using namespace std;

int number;
vector<int> numbers;
map<int, int> pairs;

int main()
{
    while (cin >> number)
    {
        if (pairs[number] != 0)
        {
            ++pairs[number];
        }
        else
        {
            ++pairs[number];
            numbers.push_back(number);
        }
    }

    for (auto const &num : numbers)
    {
        cout << num << " " << pairs[num] << endl;
    }
}