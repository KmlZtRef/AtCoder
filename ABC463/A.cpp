#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    bool con = (x % 16 == 0) && (y / (x / 16) == 9);

    cout << (con ? "Yes" : "No") << endl;

    system("pause");

    return 0;
}
