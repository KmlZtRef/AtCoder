#include <bits/stdc++.h>
#define idx(a, i) (*(a + i))

using namespace std;

void solve(int n, int depth, int k, int remain, int *result);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int *result = new int[n];
    solve(n, 1, k, k, result);

    system("pause");
    return 0;
}

void solve(int n, int depth, int k, int remain, int *result)
{
    if (n != depth)
    {
        int max = k / depth;
        for (int i = 0; i <= max; ++i)
        {
            if (remain < i * depth)
                continue;

            *(result + depth - 1) = i;
            solve(n, depth + 1, k, remain - i * depth, result);
        }
    }
    else
    {
        if (remain % depth == 0)
        {
            *(result + depth - 1) = remain / depth;

            for (int i = 0; i < n; ++i)
            {
                cout << idx(result, i) << " ";
            }
            cout << '\n';
        }
    }
}