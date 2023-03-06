#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        map<int, int> package;

        int num;
        cin >> num;

        int size = 0, maximum = 0, repeated = 0;

        for (int j = 1; j <= num; j++)
        {
            int snowflake;
            cin >> snowflake;

            if (package[snowflake] != 0)
            {
                repeated = max(package[snowflake], repeated);
                size = j - 1 - repeated;
            }

            package[snowflake] = j;
            ++size;

            maximum = max(size, maximum);
        }

        cout << maximum << endl;
    }
}