#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (char c : s)
    {
        if (c == 'o')
            count++;
    }

    cout << (count % 2 == 0 ? "even" : "odd") << endl;

    system("pause");
    return 0;
}