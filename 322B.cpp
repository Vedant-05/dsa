#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;
    int zene = min(x, min(y, z));
    long long ans = 0;

    if (zene == 0)
    {
        ans += x / 3 + y / 3 + z / 3;
        cout << ans << endl;
        return 0;
    }

    for (int i = zene - 5; i <= zene; i++)
    {
        long long temp = 0;
        long long curr = i + (x - i) / 3 + (y - i) / 3 + (z - i) / 3;
        ans = max(ans, curr);
    }

    cout << ans << endl;
}
