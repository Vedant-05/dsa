#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;

    vector<int> mp(3002, 0);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a] += b;
    }

    int ans = 0;
    int left = 0;

    for (auto c : mp)
    {

        if (c + left >= v)
        {
            if (left > v)
            {
                ans += v;
                left = c;
            }
            else
            {
                ans += v;
                int temp = v - left;
                c -= temp;
                left = c;
            }
        }
        else
        {
            ans += c + left;
            left = 0;
        }
    }

    cout << ans << endl;
}
