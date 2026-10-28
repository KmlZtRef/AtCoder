#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> *(arr + i);
    }

    int count = 0;
    for (int i = 0; i < n - 2; ++i)
    {
        if (*(arr + i) < *(arr + i + 1) && *(arr + i + 1) > *(arr + i + 2))
        {
            count++;
        }
    }

    cout << count << endl;

    system("pause");
    return 0;
}