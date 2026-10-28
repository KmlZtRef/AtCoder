#include <bits/stdc++.h>
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *takahashi = new int[n];
    int *aoki = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> idx(takahashi, i);
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> idx(aoki, i);
    }

    int big_i = -1;
    for (int i = 0; i < n; ++i)
    {
        if (idx(takahashi, i) > idx(aoki, i))
        {
            big_i = i;
        }
    }

    if (big_i < 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;

        for (int i = 0; i < n; ++i)
        {
            if (idx(takahashi, i) > idx(aoki, i))
            {
                cout << 1000000000000000000 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
    }

    cout << endl;

    system("pause");

    return 0;
}