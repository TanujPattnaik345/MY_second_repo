#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while (num--)
    {
        int g1, p2;
        cin >> g1 >> p2;

        int par; // participants
        cin >> par;
        int a[par][2];
        for (int i = 0; i < par; i++)
        {
            cin >> a[i][0] >> a[i][1];
        }
        int cost1 = 0;
        for (int i = 0; i < par; i++)
        {
            if (a[i][0] == 1)
            {
                cost1 = cost1 + g1;
            }

            if (a[i][1] == 1)
            {
                cost1 = cost1 + p2;
            }
        }
        int cost2 = 0;
        for (int i = 0; i < par; i++) // for the participant
        {
            if (a[i][0] == 1)
            {
                cost2 = cost2 + p2;
            }
            if (a[i][1] == 1)
            {
                cost2 = cost2 + g1;
            }
        }

        cout << min(cost1, cost2) << endl;
    }

    return 0;
}