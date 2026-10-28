#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (a > 0)
        {
            pos.push_back(a);
        }
        else if (a < 0)
        {
            neg.push_back(a);
        }
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end(), greater<int>());

    size_t pi = 0, ni = 0;
    int cur = 0;
    int result = 0;

    bool pend = false, nend = false;

    // loop starts here

    while (true)
    {
        pend = pi >= pos.size();
        nend = ni >= neg.size();

        if (pend && nend)
        {
            break;
        }

        if (nend)
        {
            // positive
            int pmin = pos[pi];
            int pdist = pmin - cur;

            cur = pmin;
            result += pdist;
            pi++;
        }
        else if (pend)
        {
            // negative
            int nmin = neg[ni];
            int ndist = cur - nmin;

            cur = nmin;
            result += ndist;
            ni++;
        }
        else
        {
            // min calc
            int pmin = pos[pi];
            int nmin = neg[ni];

            // dist calc
            int pdist = pmin - cur;
            int ndist = cur - nmin;

            // main calc
            if (pdist < ndist)
            {
                // positive
                cur = pmin;
                result += pdist;
                pi++;
            }
            else
            {
                // negative
                cur = nmin;
                result += ndist;
                ni++;
            }
        }
    }

    cout << result << endl;

    system("pause");

    return 0;
}