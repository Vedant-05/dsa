#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, x, y;
    cin >> n >> x >> y;

    double req = (y * n) / 100;

    double preRwq = ceil(req - x);

    int a = (int)(preRwq);

    if (a < 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else

        cout << a << endl;
}
