#include <iostream>
#include <set>
#include <vector>

using namespace std;

multiset<int>::iterator cur;
multiset<int> nums;
int k, m, n, index;
vector<int> addVec(30001), getVec(30001);

int main()
{
    cin >> k;

    while (k--)
    {
        index = 0;

        cout << endl;
        cin >> m >> n;

        for (int i = 0; i < m; i++)
        {
            cin >> addVec[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> getVec[i];
        }

        nums.insert(addVec[0]);
        cur = begin(nums);

        for (int i = 1; i < m; i++)
        {
            while (i == getVec[index] && index < n)
            {
                cout << *cur << endl;
                ++cur;
                ++index;
            }

            nums.insert(addVec[i]);

            if (cur == end(nums) || addVec[i] < *cur)
            {
                --cur;
            }
        }

        while (getVec[index] == m && index < n)
        {
            cout << *cur << endl;
            ++cur;
            ++index;
        }

        nums.clear();
    }
}