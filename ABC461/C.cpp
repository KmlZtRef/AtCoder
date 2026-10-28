#include <bits/stdc++.h>
using namespace std;

#define ulong unsigned long long
#define llong long long

int main()
{
    ulong n, k, m;
    cin >> n >> k >> m;
    multimap<ulong, ulong, greater<ulong>> cv;
    for (ulong i = 0; i < n; i++)
    {
        ulong c, v;
        cin >> c >> v;

        cv.emplace(v, c);
    }

    ulong remain = k;
    ulong sum = 0;
    vector<ulong> included;
    ulong includedCount = 0;
    for (auto &p : cv)
    {
        if (remain <= 0)
            break;

        bool contains = find(included.begin(), included.end(), p.second) != included.end();

        if (remain <= m - includedCount)
        {
            if (contains)
            {
                continue;
            }
        }

        if (!contains)
        {
            includedCount++;
            included.push_back(p.second);
        }
        // cout << p.first << endl;
        sum += p.first;
        remain--;
    }

    cout << sum << endl;

    system("pause");
    return 0;
}