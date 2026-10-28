#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        bool con1 = s[i] == 'x';
        bool con2 = (i == 0) || (s[i - 1] == 'x');
        bool con3 = (i == n - 1) || (s[i + 1] == 'x');

        if (con1 && con2 && con3)
            count++;
    }

    cout << count << endl;

    system("pause");
    return 0;
}