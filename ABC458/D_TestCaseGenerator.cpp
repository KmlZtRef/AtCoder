#include <bits/stdc++.h>
using namespace std;

void makeTest(const string &filename, int x, int q, int mode)
{
    ofstream fout(filename);

    fout << x << '\n';
    fout << q << '\n';

    for (int i = 1; i <= q; i++)
    {
        int a, b;

        if (mode == 1)
        {
            a = i;
            b = i + q;
        }
        else if (mode == 2)
        {
            a = 1000000000 - i;
            b = 1000000000 - q - i;
        }
        else if (mode == 3)
        {
            a = i;
            b = 1000000000 - i;
        }
        else if (mode == 4)
        {
            a = 500000000;
            b = 500000000;
        }
        else
        {
            if (i % 2 == 0)
            {
                a = 1;
                b = 1000000000;
            }
            else
            {
                a = 1000000000;
                b = 1;
            }
        }

        fout << a << ' ' << b << '\n';
    }
}

int main()
{
    const int Q = 200000;

    makeTest("test1_increasing.txt", 1, Q, 1);
    makeTest("test2_decreasing.txt", 1000000000, Q, 2);
    makeTest("test3_low_high.txt", 500000000, Q, 3);
    makeTest("test4_duplicates.txt", 500000000, Q, 4);
    makeTest("test5_zigzag.txt", 123456789, Q, 5);

    cout << "5 test cases generated.\n";
}