#include <bits/stdc++.h>
#define ulong unsigned long long
#define llong long long

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        llong x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        llong dx = x1 - x2;
        llong dy = y1 - y2;
        long double dist = sqrtl(dx * dx + dy * dy);

        bool isCollision = dist <= r1 + r2;

        llong dr = r1 - r2;
        if (dr < 0)
            dr *= -1;
        bool isInner = dist < dr;

        cout << ((isCollision && !isInner) ? "Yes" : "No") << endl;
    }

    system("pause");
    return 0;
}