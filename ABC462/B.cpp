#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> *count = new vector<int>[n];

    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;

        for (int j = 0; j < k; j++)
        {
            int input;
            cin >> input;
            input--;

            (count + input)->push_back(i);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        sort((count + i)->begin(), (count + i)->end());

        size_t size = (count + i)->size();

        cout << size << ' ';

        for (size_t j = 0; j < size; ++j)
        {
            int v = (count + i)->at(j);
            v++;

            cout << v << ' ';
        }

        cout << endl;
    }

    delete[] count;

    system("pause");

    return 0;
}