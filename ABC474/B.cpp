#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int group = 1;
    bool fail = false;
    for (int i = 0; i < n; ++i)
    {
        int input;
        cin >> input;

        if (fail)
            continue;

        group = i / 10 + 1;
        if (input > group * 10)
            fail = true;
    }

    cout << (fail ? "No" : "Yes") << endl;

    system("pause");

    return 0;
}