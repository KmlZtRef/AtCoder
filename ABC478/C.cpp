#include <bits/stdc++.h>

#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int *a = new int[n];

    for (int i = 0; i < n; ++i)
    {
        int ai;
        cin >> ai;
        idx(a, i) = ai;
    }

    int left = -1;
    int right = n;

    for (int i = 0; i < n - 1; ++i)
    {
        left = i;
        if (idx(a, i) > idx(a, i + 1))
            break;
    }

    right = left + k + 1;
    bool fail = false;
    for (int i = n - 1; i >= right; --i)
    {
        if (i != 0 && idx(a, i - 1) > idx(a, i))
        {
            fail = true;
            break;
        }
    }

    if (!fail)
    {
        int min = n, max = 0;
        for (int i = left + 1; i < right; ++i)
        {
            if (min > idx(a, i))
                min = idx(a, i);
            if (max < idx(a, i))
                max = idx(a, i);
        }

        bool success = (min >= idx(a, left) && max <= idx(a, right));
        cout << (success ? "Yes" : "No") << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    system("pause");
    return 0;
}