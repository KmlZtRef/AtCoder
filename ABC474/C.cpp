#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    map<int, int> m;

    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }

    for (int i = 0; i < q; ++i)
    {
        int _q;
        cin >> _q;
        m[_q] = i;
    }

    for (auto x : v)
    {
        if (!m.count(x))
            cout << x << " ";
    }
    map<int, int> m2;
    for (auto [_k, _v] : m)
    {
        m2[_v] = _k;
    }
    for (auto [_k, _v] : m2)
    {
        cout << _v << " ";
    }

    cout << endl;

    system("pause");

    return 0;
}