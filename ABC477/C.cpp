#include <bits/stdc++.h>
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int q;
    string s, t;
    cin >> q >> s >> t;

    size_t size = s.size();
    queue<size_t> substrq;
    int *substr = new int[size];
    for (size_t i = 0; i < size; ++i)
    {
        idx(substr, i) = 0;

        char c = s[i];
        substrq.push(0);

        size_t qs = substrq.size();
        for (size_t j = 0; j < qs; ++j)
        {
            size_t p = substrq.front();
            substrq.pop();

            if (c == t[p])
            {
                if (p + 1 == t.size())
                {
                    idx(substr, i - p) = 1;
                }
                else
                {
                    substrq.push(p + 1);
                }
            }
        }
    }

    for (size_t i = 0; i < (size_t)q; ++i)
    {
        size_t l, r;
        cin >> l >> r;
        l--;
        r--;

        bool success = false;
        for (size_t j = l; j < r; ++j)
        {
            if (idx(substr, j) == 1)
            {
                success = j + t.size() - 1 <= r;
                break;
            }
        }
        cout << (success ? "Yes" : "No") << endl;
    }

    system("pause");
    return 0;
}