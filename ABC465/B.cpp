#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, l, r, a, b;

    cin >> x >> y >> l >> r >> a >> b;

    int cost = 0;

    for (int i = a; i < b; ++i)
    {
        if (l <= i && i < r)
            cost += x;
        else
            cost += y;
    }

    cout << cost << endl;

    system("pause");

    return 0;
}