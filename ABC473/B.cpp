#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> m;
    int total = 0;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;

        if (m.count(a) != 0 && m[a] > 0)
        {
            total -= a;
            m[a] = 0;
        }
        else
        {
            total += a;
            m[a] = 1;
        }
    }

    cout << total << endl;

    system("pause");
    return 0;
}