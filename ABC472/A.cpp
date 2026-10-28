#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    size_t size = str.size();
    for (size_t i = 0; i < size; ++i)
    {
        if (str[i] != 'A')
            str[i] = '.';
    }

    cout << str << endl;

    system("pause");

    return 0;
}