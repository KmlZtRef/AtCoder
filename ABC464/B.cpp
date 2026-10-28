#include <bits/stdc++.h>

using namespace std;

int main()
{
    size_t h, w;
    cin >> h >> w;

    vector<string> grid(0);

    size_t left = w, right = 0, top = 0, bottom = h - 1;
    bool blackLine = false;
    for (size_t i = 0; i < h; ++i)
    {
        string str;
        cin >> str;
        grid.push_back(str);

        bool isWhite = (str.find('#') == string::npos);
        if (!isWhite)
        {
            bottom = i;

            if (!blackLine)
            {
                top = i;
                blackLine = true;
            }

            for (size_t j = 0; j < str.size(); ++j)
            {
                char c = str[j];
                if (c == '#')
                {
                    if (right < j)
                        right = j;

                    if (left > j)
                        left = j;
                }
            }
        }
    }

    // cout << "left " << left << endl;
    // cout << "right " << right << endl;
    // cout << "top " << top << endl;
    // cout << "bottom " << bottom << endl;

    for (size_t i = top; i <= bottom; ++i)
    {
        for (size_t j = left; j <= right; ++j)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    system("pause");

    return 0;
}