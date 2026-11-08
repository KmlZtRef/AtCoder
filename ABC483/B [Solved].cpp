#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int *k = new int[n];

    rep(i, n)
    {
        idx(k, i) = i + 1;
    }

    rep(i, q)
    {
        int _q;
        cin >> _q;
        int *_k = new int[n];
        rep(j, n)
        {
            if (j < _q)
            {
                int _j = _q - j - 1;
                idx(_k, _j) = -idx(k, j);
            }
            else
            {
                idx(_k, j) = idx(k, j);
            }
        }
        delete[] k;
        k = _k;
    };

    rep(i, n)
    {
        cout << idx(k, i) << endl;
    }

    system("pause");
    return 0;
}