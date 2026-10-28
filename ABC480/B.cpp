#include <bits/stdc++.h>
#define idx(a, i) (*(a + i))

using namespace std;

bool matchingCharacters(string a, string b);

int main()
{
    int n, m;
    cin >> n >> m;

    unordered_map<string, int> votes;
    vector<string> names;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        votes[s] = 0;
        names.push_back(s);
    }

    for (int i = 0; i < m; ++i)
    {
        string t;
        cin >> t;

        if (votes.count(t))
            votes[t] += 1;
        else
        {
            int count = 0;
            string selected;
            for (const auto &[key, value] : votes)
            {
                if (matchingCharacters(t, key))
                {
                    selected = key;
                    count += 1;
                }
            }

            if (count == 1)
                votes[selected] += 1;
        }
    }

    for (const auto &name : names)
    {
        cout << votes[name] << endl;
    }

    system("pause");
    return 0;
}

bool matchingCharacters(string a, string b)
{
    if (a.size() != b.size())
        return false;

    int result = 0;
    size_t size = a.size();
    for (size_t i = 0; i < size; ++i)
    {
        if (a[i] != b[i])
        {
            if (++result >= 2)
            {
                return false;
            }
        }
    }

    return true;
}
