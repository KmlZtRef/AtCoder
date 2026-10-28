#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;

    vector<int> w(0);
    for (int i = 0; i < n; ++i)
    {
        int wi;
        cin >> wi;
        w.push_back(wi);
    }

    int max = (w[0] + w[1] + w[2]);
    for (size_t i = 0; i < (size_t)n - 2; ++i)
    {
        for (size_t j = i + 1; j < (size_t)n - 1; ++j)
        {
            for (size_t k = j + 1; k < (size_t)n; ++k)
            {
                int cost = (int)(i + j + k) + 3;
                int value = w[i] + w[j] + w[k];

                if (cost <= v && value > max)
                {
                    max = value;
                }
            }
        }
    }

    cout << max << endl;

    system("pause");
    return 0;
}