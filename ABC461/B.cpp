#include <bits/stdc++.h>

#define ulong unsigned long long;
#define llong long long;

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(0);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    bool fail = false;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (v[input - 1] != i + 1)
        {
            fail = true;
            break;
        }
    }

    cout << (fail ? "No" : "Yes") << endl;

    system("pause");
    return 0;
}