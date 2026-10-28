#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    if (h > 1 && w > 1)
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                bool hSide = i == 0 || i == (h - 1);
                bool wSide = j == 0 || j == (w - 1);
                if (hSide && wSide)
                {
                    cout << 2;
                }
                else if (hSide || wSide)
                {
                    cout << 3;
                }
                else
                {
                    cout << 4;
                }
                cout << ' ';
            }
            cout << '\n';
        }
    }
    else if (h == 1 && w > 1)
    {
        for (int j = 0; j < w; j++)
        {
            bool side = j == 0 || j == (w - 1);
            if (side)
            {
                cout << 1;
            }
            else
                cout << 2;
            cout << ' ';
        }
    }
    else if (w == 1 && h > 1)
    {
        for (int i = 0; i < h; i++)
        {
            bool side = i == 0 || i == (h - 1);
            if (side)
            {
                cout << 1;
            }
            else
                cout << 2;
            cout << '\n';
        }
    }
    else if (h == 1 && w == 1)
    {
        cout << 0;
    }

    cout << endl;

    system("pause");

    return 0;
}