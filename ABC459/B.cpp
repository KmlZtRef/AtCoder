#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        string str;
        cin >> str;
        char head = str[0];
        int c = 0;
        switch (head)
        {
        case 'a':
        case 'b':
        case 'c':
            c = 2;
            break;
        case 'd':
        case 'e':
        case 'f':
            c = 3;
            break;
        case 'g':
        case 'h':
        case 'i':
            c = 4;
            break;
        case 'j':
        case 'k':
        case 'l':
            c = 5;
            break;
        case 'm':
        case 'n':
        case 'o':
            c = 6;
            break;
        case 'p':
        case 'q':
        case 'r':
        case 's':
            c = 7;
            break;
        case 't':
        case 'u':
        case 'v':
            c = 8;
            break;
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            c = 9;
            break;

        default:
            break;
        }
        cout << c;
    }
    cout << endl;

    system("cls");
    return 0;
}