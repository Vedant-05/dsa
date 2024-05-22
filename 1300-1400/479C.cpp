#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vc(n);
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vc[i] = {a, b};
    }

    sort(vc.begin(), vc.end());

    for (int i = 0; i < n; i++)
    {
        if (ans.size() == 0)
        {
            ans.push_back(min(vc[i].first, vc[i].second));
        }
        else
        {
            if (vc[i].second >= ans.back())
                ans.push_back(vc[i].second);
            else
                ans.push_back(vc[i].first);
        }
    }

    cout << ans.back() << endl;
}
