#include <bits/stdc++.h>
#define ulong unsigned long long
#define llong long long

#define ULONG_MAX 0xffffffffffffffff

using namespace std;

typedef pair<ulong, ulong> coord;

void bfs(coord pos, ulong **depth);

int main()
{
    ulong h, w;
    cin >> h >> w;

    vector<coord> blacks;

    for (ulong i = 0; i < h; ++i)
    {
        string input;
        cin >> input;
        for (ulong j = 0; j < w; ++j)
        {
            char c = input[j];
            if (j == '#')
            {
                blacks.push_back({i, j});
            }
        }
    }

    system("pause");
    return 0;
}

void bfs(coord pos, ulong **depth)
{
    // bool **visited = ;
    queue<coord> q;
    q.push(pos);
    *(*(depth + pos.first) + pos.second) = 0;
}
