#include <bits/stdc++.h>
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int *classes = new int[k];
    for (int i = 0; i < k; ++i)
        idx(classes, i) = 0;

    int max = 0;
    for (int i = 0; i < n; ++i)
    {
        int c;
        cin >> c;
        c--;
        idx(classes, c) += 1;

        if (max < idx(classes, c))
            max = idx(classes, c);
    }
    // cout << max << endl;

    int count = 0;
    for (int i = 0; i < k; ++i)
    {
        int v = idx(classes, i);
        if (max - 1 <= v)
            count++;
    }

    cout << count << endl;

    system("pause");
    return 0;
}