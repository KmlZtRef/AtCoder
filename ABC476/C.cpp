#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    rep(i, n)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    rep(i, 3)
    {
        cout << v[i] << endl;
    }

    system("pause");

    return 0;
}