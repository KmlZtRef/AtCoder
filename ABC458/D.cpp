#include <bits/stdc++.h>
#define ulong unsigned long long

using namespace std;

void insert(vector<ulong> &v, ulong num);

int main()
{
    ulong x, q;
    cin >> x >> q;

    vector<ulong> nums(0);
    nums.push_back(x);

    for (ulong i = 0; i < q; ++i)
    {
        ulong a, b;
        cin >> a >> b;
        nums.push_back(a);
        nums.push_back(b);
        sort(nums.begin(), nums.end());
        cout << nums[i + 1] << '\n';
    }

    cout << endl;

    system("pause");

    return 0;
}

void insert(vector<ulong> &v, ulong num)
{
    ulong half = v.size() / 2;
    ulong i = half;
    while (half > 0)
    {
        half /= 2;
        if (v[i] < num)
            i += half;
        else
            i -= half;
    }
    v.insert(v.begin() + i, num);
}

// 0 21 123 341 453 4124 14221 324242
