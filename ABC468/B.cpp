#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, d;
    cin >> m >> d;
    string s;
    cin >> s;
    size_t size = s.size();

    int dist = d + 1;
    for (size_t i = 0; i < size; ++i)
    {
        char c = s.at(i);
        dist++;
        if (c == 'G')
        {
            dist = 0;
        }

        if (dist <= d)
        {
            if (c == '.')
                s[i] = 'L';
        }
    }

    for (int i = (int)size - 1; i >= 0; --i)
    {
        char c = s.at(i);
        dist++;
        if (c == 'G')
        {
            dist = 0;
        }

        if (dist <= d)
        {
            if (c == '.')
                s[i] = 'L';
        }
    }

    int count = 0;
    for (size_t i = 0; i < size; ++i)
        if (s[i] == '.')
            count++;

    cout << count << endl;

    system("pause");
    return 0;
}