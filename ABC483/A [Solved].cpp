#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
        n++;

    cout << n / 2 << endl;

    system("pause");
    return 0;
}