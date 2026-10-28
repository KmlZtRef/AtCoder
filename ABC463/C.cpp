#include <bits/stdc++.h>

using namespace std;

#define ulong unsigned long long

int main()
{
    int n;
    cin >> n;

    map<ulong, ulong> m;

    for (size_t i = 0; i < n; i++)
    {
        ulong h, l;
        cin >> h >> l;
        if (m.count(l))
        {
            if (m[l] < h)
                m[l] = h;
        }
        else
        {
            m[l] = h;
        }
    }

    system("pause");

    return 0;
}
