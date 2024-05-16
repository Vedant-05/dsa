#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> neg;
    vector<int> pos;
    int countzer = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a == 0)
        {
            countzer++;
        }
        else if (a > 0)
        {
            pos.push_back(a);
        }
        else
        {

            neg.push_back(a);
        }
    }

    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());

    if (neg.size() >= k)
    {
        for (int i = 0; i < k; i++)
        {
            neg[i] = neg[i] * -1;
        }
        int ans = 0;
        for (int i = 0; i < neg.size(); i++)
        {
            ans += neg[i];
        }
        for (int i = 0; i < pos.size(); i++)
        {
            ans += pos[i];
        }

        cout << ans << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < neg.size(); i++)
        {
            neg[i] = neg[i] * -1;
        }
        k -= neg.size();
        int ans = 0;
        if (countzer > 0)
        {
            for (int i = 0; i < neg.size(); i++)
            {
                ans += neg[i];
            }
            for (int i = 0; i < pos.size(); i++)
            {
                ans += pos[i];
            }

            cout << ans << endl;
            return 0;
        }
        else
        {
            int maxNegi = neg.size() ? neg[neg.size() - 1] : INT_MAX;
            int minPos = pos.size() ? pos[0] : INT_MAX;
            int toMinus = min(maxNegi, minPos);
            for (int i = 0; i < neg.size(); i++)
            {
                ans += neg[i];
            }
            for (int i = 0; i < pos.size(); i++)
            {
                ans += pos[i];
            }
            if (k % 2 == 0)
            {
                cout << ans << endl;
            }
            else
            {
                cout << ans - 2 * toMinus << endl;
            }

            return 0;
        }
    }
}
