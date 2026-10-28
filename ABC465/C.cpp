#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    int dir = -1;
    int l = 0, r = n - 1;
    int *arr = new int[n];

    for (int i = n - 1; i >= 0; --i)
    {
        char c = s[i];
        if (c == 'o')
        {
            dir *= -1;
        }

        if (dir == 1)
        {
            *(arr + l) = i + 1;
            ++l;
        }
        else if (dir == -1)
        {
            *(arr + r) = i + 1;
            --r;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << ' ';
    }

    delete[] arr;

    cout << endl;

    system("pause");

    return 0;
}