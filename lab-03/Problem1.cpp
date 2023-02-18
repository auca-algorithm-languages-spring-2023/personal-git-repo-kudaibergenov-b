#include <iostream>
#include <set>
#include <vector>

using namespace std;

multiset<int>::iterator cur;
multiset<int> nums;
int k, m, n, index;
string blank;
vector<int> addVec(30001), getVec(30001);

int main()
{
    cin >> k;

    for (int t = 0; t < k; t++)
    {
        cout << blank;
        blank = "\n";

        cin >> m >> n;

        index = 0;

        for (int a = 0; a < m; a++)
        {
            cin >> addVec[a];
        }

        for (int g = 0; g < n; g++)
        {
            cin >> getVec[g];
        }

        nums.insert(addVec[0]);
        cur = begin(nums);

        for (int i = 1; i < m; i++)
        {
            while (i == getVec[index] && index < n)
            {
                cout << *cur << endl;
                cur++;
                index++;
            }

            nums.insert(addVec[i]);

            if (*cur > addVec[i] || cur == end(nums))
            {
                cur--;
            }
        }

        while (m == getVec[index] && index < n)
        {
            cout << *cur << endl;
            cur++;
            index++;
        }

        nums.clear();
    }
}