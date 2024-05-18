#include <bits/stdc++.h>
using namespace std;

bool check(int i, int x)
{
    int ans = 0;

    while (x != 0)
    {
        int temp = x % 10;
        ans += temp;
        x /= 10;
    }

    if (ans == i)
    {
        return true;
    }
    return false;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> ans;

    for (int i = 1; i <= 81; i++)
    {
        int x = b * pow(i, a) + c;
        // cout << x << endl;
        if (x<1e9 && check(i, x))
        {
            ans.push_back(x);
        }
    }

    cout << ans.size() << endl;
    for (auto c : ans)
    {
        cout << c << " ";
    }

    return 0;
}
