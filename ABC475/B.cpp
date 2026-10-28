#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int coin1 = 0;
    int coin10 = 0;
    int coin100 = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        int cost = a;
        if (cost % 1000 != 0)
        {
            cost = (a / 1000 + 1) * 1000;
        }

        int payback = cost - a;
        coin100 += payback / 100;
        payback %= 100;
        coin10 += payback / 10;
        payback %= 10;
        coin1 += payback;
    }

    cout << coin1 << ' ' << coin10 << ' ' << coin100 << endl;

    system("pause");
    return 0;
}