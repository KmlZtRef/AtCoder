#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    string s[5];
    rep(i, 5) cin >> s[i];

    int min = 10;

    rep(i, 5)
    {
        int c = 0;
        rep(j, 5)
        {
            if (s[i][j] == '.')
                c++;
        }

        if (min > c)
            min = c;
    }
    rep(i, 5)
    {
        int c = 0;
        rep(j, 5)
        {
            if (s[j][i] == '.')
                c++;
        }

        if (min > c)
            min = c;
    }

    int c = 0;
    rep(i, 5)
    {
        if (s[i][i] == '.')
            c++;
    }
    if (min > c)
        min = c;

    c = 0;
    rep(i, 5)
    {
        if (s[i][4 - i] == '.')
            c++;
    }
    if (min > c)
        min = c;

    cout << min << endl;

    system("pause");
    return 0;
}