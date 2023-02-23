#include <iostream>
#include <queue>

using namespace std;

queue<int> tQueue[1001];
int k, n, element, nElements, nTeams;
int teams[1000000];
string cmd;

int main()
{
    k = 1;

    for (;;)
    {
        queue<int> orderOfTeams;

        cin >> nTeams;

        if (nTeams == 0)
        {
            break;
        }

        for (int team = 0; team < nTeams; team++)
        {
            while (!tQueue[team].empty())
            {
                tQueue[team].pop();
            }

            cin >> nElements;

            for (int i = 0; i < nElements; i++)
            {
                cin >> element;
                teams[element] = team;
            }
        }

        cout << "Scenario #" << k << endl;

        for (;;)
        {
            cin >> cmd;

            if (cmd == "STOP")
            {
                break;
            }
            else if (cmd.front() == 'E')
            {
                cin >> n;

                if (tQueue[teams[n]].empty())
                {
                    orderOfTeams.push(teams[n]);
                }

                tQueue[teams[n]].push(n);
            }
            else
            {
                cout << tQueue[orderOfTeams.front()].front() << endl;
                tQueue[orderOfTeams.front()].pop();
                if (tQueue[orderOfTeams.front()].empty())
                {
                    orderOfTeams.pop();
                }
            }
        }

        ++k;
        cout << endl;
    }
}