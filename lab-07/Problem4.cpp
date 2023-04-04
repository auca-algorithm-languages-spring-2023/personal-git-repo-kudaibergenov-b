#include <iostream>
#include <set>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int k;
    cin >> k;

    for (int i = 1; i <= k; i++)
    {
        vector<int> stamps(10001);
        vector<set<int>> friends;
        int unique = 0;

        int n;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int m;
            cin >> m;

            set<int> nStamps;
            friends.push_back(nStamps);

            for (int z = 0; z < m; z++)
            {
                int a;
                cin >> a;

                stamps[a]++;
                friends[j].insert(a);
            }
        }


        for (auto stamp : stamps)
        {
            if (stamp == 1)
            {
                unique++;
            }
        }

        cout << "Case " << i << ": ";

        for (int t = 0; t < friends.size(); t++)
        {
            int owned_stamps = 0;
            for (const auto f : friends[t])
            {
                if (stamps[f] == 1)
                {
                    owned_stamps++;
                }
            }

            cout << fixed << setprecision(6) << owned_stamps * 100.0 / unique << "% ";
        }

        cout << endl;
    }
}
