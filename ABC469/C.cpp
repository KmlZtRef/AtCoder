#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    vector<int> vd;
    vector<int> vi;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'o')
        {
            int dist;
            if (vd.size() == 0)
                dist = i;
            else
                dist = i - vd[vd.size() - 1];

            vd.push_back(dist);
            vi.push_back(i);
        }
    }

    int li = 0;
    int ld = vd[li];
    int lc = 0;
    for (int i = 0; i < n; ++i)
    {
        int c = i;

        --ld;
        if (ld <= 0)
        {
            li++;
            ld = vd[li];
        }

        int d = ld;

        if (s[i] == 'o')
            lc++;

        int oc = lc;

        for (int j = li; j < vd.size() - 1; ++j)
        {
            if (oc >= d)
            {
                oc -= d;
                c += oc;
            }
            else
            {
                c += oc;
                break;
            }

            d = vd[j];
        }

        cout << c << endl;
    }

    system("pause");
    return 0;
}