#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> m;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if (m.count(s))
        {
            m[s] += 1;
        }
        else
        {
            m[s] = 1;
        }
    }

    int max = -1;

    for (auto &pair : m)
    {
        if (max < pair.second)
            max = pair.second;
    }

    cout << max << endl;

    system("pause");

    return 0;
}