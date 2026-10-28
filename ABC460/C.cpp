#include <bits/stdc++.h>
#define ulong unsigned long long
#define llong long long

using namespace std;

int main()
{
    ulong n, m;
    cin >> n >> m;

    vector<ulong> shari(0);
    vector<ulong> neta(0);

    for (ulong i = 0; i < n; ++i)
    {
        ulong input;
        cin >> input;
        shari.push_back(input);
    }

    for (ulong i = 0; i < m; ++i)
    {
        ulong input;
        cin >> input;
        neta.push_back(input);
    }

    sort(shari.begin(), shari.end());
    sort(neta.rbegin(), neta.rend());

    ulong result = 0;
    for (ulong i = 0; i < shari.size(); ++i)
    {
        if (neta.size() == 0)
            break;

        if (shari[i] * 2 >= neta[neta.size() - 1])
        {
            result++;
            neta.pop_back();
        }
    }

    cout << result << endl;

    system("pause");
    return 0;
}