#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool result = true;

    for (int i = 0; i < n; ++i)
    {
        int input;
        cin >> input;
        if (input >= 0)
            result = false;
    }

    cout << (result ? "Yes" : "No") << endl;

    system("pause");
    return 0;
}