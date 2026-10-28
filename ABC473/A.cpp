#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (i >= n / 2)
            total += a;
    }

    cout << total << endl;

    system("pause");
    return 0;
}