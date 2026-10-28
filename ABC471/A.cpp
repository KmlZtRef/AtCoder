#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    bool result =
        a + b == 9 ||
        a - b == 9 ||
        a * b == 9 ||
        (double)a / b == 9.0;

    cout << (result ? "Nine" : "Nein") << endl;

    system("pause");

    return 0;
}