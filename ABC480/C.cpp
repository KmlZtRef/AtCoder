#include <bits/stdc++.h>
#define idx(a, i) (*(a + i))

using namespace std;

int main()
{
    int n, k, t;
    cin >> n >> k >> t;

    unordered_map<int, bool> btn;

    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;

        btn[a] = true;
    }

    int result = 0;
    int i = 0;
    int last = -k;
    while (i < t)
    {
        if (btn.count(i))
        {
            last = i;
            i++;
        }
        else if (i - last < k)
        {
            i++;
        }
        else
        {
            result += 1;
            // last = i;
            i += k;
        }
    }

    cout << result << endl;

    system("pause");
    return 0;
}