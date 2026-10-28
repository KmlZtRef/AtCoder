#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ar, ac, dr, dc;
    for (int i = 0; i < 2; ++i)
    {
        string s;
        cin >> s;
        if (s[0] == 'A')
        {
            ar = i;
            ac = 0;
        }
        if (s[1] == 'A')
        {
            ar = i;
            ac = 1;
        }
        if (s[0] == 'D')
        {
            dr = i;
            dc = 0;
        }
        if (s[1] == 'D')
        {
            dr = i;
            dc = 1;
        }
    }

    cout << ((ar == dr || ac == dc) ? "Yes" : "No") << endl;

    system("pause");
    return 0;
}