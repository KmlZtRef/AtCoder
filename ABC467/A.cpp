#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    double hm = (double)h / 100.0;
    double bmi = (double)w / (double)(hm * hm);
    cout << (bmi >= 25.0 ? "Yes" : "No") << endl;

    system("pause");
    return 0;
}