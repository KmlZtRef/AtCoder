#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int h, w, n, q;
    cin >> h >> w >> n >> q;

    int *row = new int[h];
    int *col = new int[w];

    rep(i, h) idx(row, i) = 0;
    rep(i, w) idx(col, i) = 0;

    rep(i, n)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        idx(row, x)++;
        idx(col, y)++;
    }

    for (int i = 1; i < h; ++i)
        idx(row, i) += idx(row, i - 1);
    for (int i = 1; i < w; ++i)
        idx(col, i) += idx(col, i - 1);

    rep(i, q)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int u, d;
            cin >> u >> d;
            u--;
            d--;
            int sum;
            if (u == 0)
                sum = idx(row, d);
            else
                sum = idx(row, d) - idx(row, u - 1);

            cout << sum << endl;
        }
        else if (query == 2)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            int sum;
            if (l == 0)
                sum = idx(col, r);
            else
                sum = idx(col, r) - idx(col, l - 1);

            cout << sum << endl;
        }
    }

    delete[] row;
    delete[] col;

    system("pause");
    return 0;
}