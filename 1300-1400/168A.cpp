#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, x, y;
    cin >> n >> x >> y;

    double req = (y * n) / 100;

    double preRwq = ceil(req - x);

    int a = (int)(preRwq);

    cout << a << endl;
}
