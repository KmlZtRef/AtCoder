#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    size_t size = str.size();
    for (size_t i = 0; i < size; i++)
    {
        cout << str[i];
        if (i != size - 1)
            cout << 'o';
    }

    cout << endl;

    system("pause");
    return 0;
}