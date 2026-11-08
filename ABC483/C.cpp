#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int *main = new int[n];
    int *sub = new int[n];
    int max = 0;
    int max2 = 1;

    rep(i, n)
    {
        idx(main, i) = 0;
        idx(sub, i) = 0;
    }

    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        idx(main, --a) += 1;
        idx(sub, --b) += 1;

        if (a != max)
        {
            if (idx(main, max) < idx(main, a))
            {
                max = a;
            }
            else if (idx(main, max2) < idx(main, a))
            {
                max2 = a;
            }
        }
    }

    rep(i, n)
    {
        int res;
        if (idx(sub, i) > idx(main, max))
        {
            res = i;
        }
        else if (idx(sub, i) == idx(main, max))
        {
            res = min(i, max);
        }
        else
        {
            res = max;
        }

        cout << (res + 1) << endl;
    }

    delete[] main;
    delete[] sub;

    system("pause");
    return 0;
}