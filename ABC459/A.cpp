#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    a--;

    string str = "HelloWorld";

    for (int i = 0; i < 10; i++)
    {
        if (i != a)
            cout << str[i];
    }
    cout << endl;

    system("cls");
    return 0;
}