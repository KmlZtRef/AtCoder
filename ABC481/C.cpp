#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> m;
    int max = 0;
    rep(i, n)
    {
        string q;
        cin >> q;
        if (m.count(q))
        {
            cout << m[q] << endl;
        }
        else
        {
            int id = ++max;
            m[q] = id;
            cout << id << endl;
        }
    }

    system("pause");
    return 0;
}