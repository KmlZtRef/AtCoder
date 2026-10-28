#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define idx(a, i) (*(a + i))

using namespace std;

int *minEdges;
vector<int> *edges;
map<int, int> visited;

pair<int, bool> dfs(int curNode, int targetNode, int cost);

int main()
{
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    s--;
    t--;
    edges = new vector<int>[n];
    minEdges = new int[n];

    rep(i, n)
    {
        idx(minEdges, i) = n;
    }

    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        (edges + a)->push_back(b);
        if (idx(minEdges, a) > b)
            idx(minEdges, a) = b;
    }

    pair<int, bool> res = dfs(s, t, 0);

    cout << (res.second ? res.first : -1) << endl;

    system("pause");
    return 0;
}

// <cost, success>
pair<int, bool> dfs(int curNode, int targetNode, int cost)
{
    if (curNode == targetNode)
        return {cost, true};

    visited[curNode] = 1;

    int minCost = INT32_MAX;
    bool success = false;
    for (int next : idx(edges, curNode))
    {
        if (visited.count(next) && visited[next] > 0)
            continue;

        bool isMin = idx(minEdges, curNode) == next;
        pair<int, bool> res = dfs(next, targetNode, cost + (isMin ? 0 : 1));
        if (res.second)
        {
            success = true;
            minCost = min(minCost, res.first);
        }
    }

    visited[curNode] = 0;
    return {minCost, success};
}