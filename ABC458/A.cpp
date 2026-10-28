#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int a;
    cin >> str >> a;

    for (int i = a; i < (str.size() - a); i++)
    {
        cout << str[i];
    }

    cout << endl;

    system("pause");

    return 0;
}