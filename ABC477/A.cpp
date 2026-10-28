#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    cin >> c;

    switch (c)
    {
    case 'B':
        cout << 'Y' << endl;
        break;
    case 'Y':
        cout << 'R' << endl;
        break;
    case 'R':
        cout << 'B' << endl;
        break;
    default:
        break;
    }

    system("pause");
    return 0;
}