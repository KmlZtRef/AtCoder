#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int *maxes = new int[m];

    for (int i = 0; i < m; ++i)
    {
        int *ptr = (maxes + i);
        *ptr = -1;
    }

    for (int i = 0; i < n; ++i)
    {
        int c, s;
        cin >> c >> s;

        int *ptr = (maxes + c - 1);
        if (*ptr < s)
        {
            *ptr = s;
        }
    }

    for (int i = 0; i < m; ++i)
    {
        int *ptr = (maxes + i);
        cout << *ptr << ' ';
    }
    cout << endl;

    system("pause");
    return 0;
}