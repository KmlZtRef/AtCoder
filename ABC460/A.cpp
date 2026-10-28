#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int i = 0;
    while (m != 0)
    {
        m = n % m;
        i++;
    }

    cout << i;

    system("pause");
    return 0;
}