#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    size_t size = str.size();
    for (size_t i = 0; i < size; ++i)
    {
        char c = str[i];
        if (c >= '0' && c <= '9')
            cout << c;
    }

    system("pause");

    return 0;
}