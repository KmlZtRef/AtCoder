#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    size_t size = str.size();

    int e = 0, w = 0;
    for (size_t i = 0; i < size; ++i)
    {
        char c = str[i];

        if (c == 'E')
            e++;
        if (c == 'W')
            w++;
    }

    cout << (e > w ? "East" : "West") << endl;

    system("pause");

    return 0;
}