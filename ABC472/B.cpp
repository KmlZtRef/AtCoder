#include <bits/stdc++.h>
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *l = new int[n];
    int left = 0, right = 0;
    for (int i = 0; i < n; ++i)
    {
        int len;
        cin >> len;
        idx(l, i) = len;
        right += len;
    }

    int min = INT32_MAX;
    for (int i = 0; i < n - 1; ++i)
    {
        int c = idx(l, i);
        right -= c;
        left += c;

        int diff = right - left;
        if (diff < 0)
            diff *= -1;

        if (min > diff)
            min = diff;
    }

    cout << min << endl;

    system("pause");

    return 0;
}