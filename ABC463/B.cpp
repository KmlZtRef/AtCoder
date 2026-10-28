#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char x;
    cin >> n >> x;

    int ix = x - 'A';

    string *t = new string[n];

    for (size_t i = 0; i < n; ++i)
    {
        cin >> *(t + i);
    }

    bool result = false;
    for (int i = 0; i < 5; ++i)
    {
        char c = (t + i)->at(ix);
        if (c == 'o')
        {
            result = true;
            break;
        }
    }

    cout << (result ? "Yes" : "No") << endl;

    system("pause");

    return 0;
}
