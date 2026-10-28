#include <bits/stdc++.h>
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    int *x = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> idx(x, i);
    }

    vector<int> p;

    for (int i = 0; i < n; ++i)
    {

        bool fail = false;
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;

            int dist = idx(x, i) - idx(x, j);
            if (dist < 0)
                dist *= -1;

            if (dist < d)
                fail = true;
        }

        if (!fail)
        {
            p.push_back(i);
        }
    }

    cout << p.size() << endl;
    for (int e : p)
    {
        cout << (e + 1) << ' ';
    }
    cout << endl;

    system("pause");
    return 0;
}