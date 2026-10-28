#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int count = 0;
        while (x != y)
        {
            if (x > y)
                x = (int)floor((double)x / (double)k);
            else if (x < y)
                y = (int)floor((double)y / (double)k);

            ++count;
        }

        cout << count << endl;
    }

    system("pause");
    return 0;
}