#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int prev, cur;
    int ans = 0;
    rep(i, n)
    {
        if (i != 0)
            prev = cur;

        cin >> cur;

        if (i != 0)
        {
            if (
                (prev <= k && k < cur) ||
                (cur < k && k <= prev) ||
                (i == n - 1 && k == cur))
                ans++;
        }
    }

    cout << ans << endl;

    system("pause");
    return 0;
}