#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *cc = new int[n];
    for (int i = 0; i < n; ++i)
    {
        *(cc + i) = 0;
    }

    for (int i = 0; i < n; ++i)
    {
        int ic;
        cin >> ic;
        ic--;
        *(cc + ic) += 1;
    }

    int max = 0;
    for (int i = 0; i < n; ++i)
    {
        if (*(cc + i) > max)
            max = *(cc + i);
    }

    cout << (n - max) << endl;

    system("pause");
    return 0;
}