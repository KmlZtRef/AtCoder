#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int x = m / n;
    int y = m % n;
    for (int i = 0; i < n; ++i)
    {
        cout << x + (i < y ? 1 : 0) << endl;
    }

    system("pause");
    return 0;
}