#include <iostream>
#include <set>

using namespace std;

int main()
{
    for (;;)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        multiset<int> bills;
        long long result = 0;

        for (int day = 0; day < n; day++)
        {
            int k;
            cin >> k;

            for (int bill = 0; bill < k; bill++)
            {
                int value;
                cin >> value;

                bills.insert(value);
            }

            result += *--end(bills) - *begin(bills);
            bills.erase(begin(bills));
            bills.erase(--end(bills));
        }

        cout << result << endl;
    }
}