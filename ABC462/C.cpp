#include <bits/stdc++.h>

using namespace std;

#define ulong unsigned long long

typedef pair<ulong, ulong> point;

int main()
{
    ulong n;
    cin >> n;

    point *points = new point[n];

    ulong minX = 300001;
    ulong minX2 = 300001;
    ulong minY = 300001;
    ulong minY2 = 300001;

    for (ulong i = 0; i < n; ++i)
    {
        ulong x, y;
        cin >> x >> y;

        point p = {x, y};
        *(points + i) = p;

        if (p.first < minX)
        {
            minX2 = minX;
            minX = p.first;
        }

        if (p.second < minY)
        {
            minY2 = minY;
            minY = p.second;
        }
    }

    for (ulong i = 0; i < n; i++)
    {
        point p = *(points + i);
        if (p.first <= minX2 && p.second <= minY2)
        {
            cout << (i + 1) << endl;
            break;
        }
    }

    system("pause");

    return 0;
}

/*

20
1 1
1 2
1 3
1 4
1 5
1 6
1 7
1 8
1 9
2 1
2 5
2 9
4 9
8 1
9 1
11 2
12 4
15 8
19 19
20 20
*/