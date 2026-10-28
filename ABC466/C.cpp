#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int l = 0, r = n - 1;
    int count = 0;
    int cl = 0;
    while (true)
    {
        int m = (l + r) / 2;

        cout << "? " << l << " " << m << endl;

        string ans;
        cin >> ans;
        if (ans == "Yes")
        {
            cl = m;
            l = m + 1;
            r = n - 1;
        }
        else
        {
            r = m - 1;

            if (l >= r)
            {
                // count +=

                for (int i = l; i < n - 1; ++i)
                {
                    cout << "? " << i << " " << i + 1 << endl;

                    cin >> ans;

                    if (ans == "Yes")
                    {
                        l = i;
                        r = n - 1;
                        break;
                    }
                }
            }
        }
    }

    system("pause");
    return 0;
}