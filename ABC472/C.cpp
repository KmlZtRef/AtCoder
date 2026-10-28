#include <bits/stdc++.h>
#define idx(a, i) (*(a + i))
#define ull unsigned long long

using namespace std;

ull dfs(int **grid, int x, int y, int w, int h, ull depth, ull max_d);

const pair<int, int> dir[4] = {
    {1, 0},
    {-1, 0},
    {0, 1},
    {0, -1}};

int main()
{
    int h, w, k;
    cin >> h >> w >> k;

    int **grid = new int *[h];

    int *safe_h = new int[h];
    int *safe_w = new int[w];

    for (int i = 0; i < h; ++i)
        idx(safe_h, i) = 1;
    for (int i = 0; i < w; ++i)
        idx(safe_w, i) = 1;

    for (int i = 0; i < h; ++i)
    {
        string s;
        cin >> s;

        idx(grid, i) = new int[w];
        for (int j = 0; j < w; ++j)
        {
            idx(idx(grid, i), j) = (s[(size_t)j] == '#') ? 0 : 1;
            if (s[(size_t)j] == '#')
            {
                idx(safe_h, i) = 0;
                idx(safe_w, j) = 0;
            }
        }
    }

    vector<int> safe_h_v(0);
    for (int i = 0; i < h; ++i)
    {
        if (idx(safe_h, i) == 1)
        {
            safe_h_v.push_back(i);
        }
    }

    ull total = 0;
    for (int i = 0; i < w; ++i)
    {
        if (idx(safe_w, i) == 0)
            continue;

        for (size_t j = 0; j < safe_h_v.size(); ++j)
        {
            idx(idx(grid, safe_h_v[j]), i) = 0;
            total += dfs(grid, i, safe_h_v[j], w, h, 0, k);
        }
    }

    cout << (total) << endl;

    system("pause");

    return 0;
}

ull dfs(int **grid, int x, int y, int w, int h, ull depth, ull max_d)
{
    if (depth > max_d)
        return 0;

    idx(idx(grid, y), x) = 0; // visited
    cout << "(" << x << ", " << y << ")" << endl;

    int total = 0;
    for (int i = 0; i < 4; i++)
    {
        int t_x = x + dir[i].first;
        int t_y = y + dir[i].second;

        if (t_x >= w || t_x < 0 || t_y >= h || t_y < 0) // check out of bound
            continue;

        if (idx(idx(grid, t_y), t_x) == 1)
        {
            total += dfs(grid, t_x, t_y, w, h, depth + 1, max_d);
        }
    }

    return total + 1;
}
