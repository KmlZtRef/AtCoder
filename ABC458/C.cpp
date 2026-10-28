#include <bits/stdc++.h>
#define ulong unsigned long long

using namespace std;

int main()
{
    string str;
    cin >> str;
    size_t size = str.size();
    size_t half = size / 2;
    // cout << half << endl;

    ulong count = 0;
    for (size_t i = 0; i < size; ++i)
    {
        char c = str[i];
        if (c == 'C')
        {
            size_t near = (i < half ? i + 1 : size - i);
            count += near;
            // cout << near << endl;
        }
    }

    cout << count << endl;

    system("pause");

    return 0;
}