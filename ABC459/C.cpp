#include <bits/stdc++.h>
#define ulong unsigned long long

using namespace std;

int main()
{
    ulong N, Q;
    cin >> N >> Q;

    ulong *g = new ulong[N]{0};
    ulong *sorted = new ulong[N];
    ulong min = 0;

    for (ulong i = 0; i < Q; i++)
    {
        int q;
        ulong x;
        cin >> q >> x;
        if (q == 1)
        {
            x--;
            *(g + x) += 1;
            if (x < N - 1)
            {
                // while (< *(g + x + 1))
                // {
                // }
            }
        }
        if (q == 2)
        {
            ulong min;

            ulong count = 0;
            for (ulong j = 0; j < N; j++)
            {
                if (*(g + j) >= x + min)
                    count++;
            }

            cout << count << endl;
        }
    }

    system("pause");
    return 0;
}