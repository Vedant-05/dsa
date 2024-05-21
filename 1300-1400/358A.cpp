#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        arr[i] = a;
    }
    if (n == 2)
    {
        cout << "no" << endl;
        return 0;
    }

    vector<vector<int>> pairs(n - 1, vector<int>(2));

    for (int i = 1; i < n; i++)
    {
        int mini = min(arr[i], arr[i - 1]);
        int maxi = max(arr[i], arr[i - 1]);
        pairs[i - 1][0] = mini;
        pairs[i - 1][1] = maxi;
    }

    sort(pairs.begin(), pairs.end());

    bool is_it = false;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            int S1 = pairs[i][0];
            int E1 = pairs[i][1];
            int S2 = pairs[j][0];
            int E2 = pairs[j][1];

            if (S1 > S2 && E2 < E1 && E2 > S1)
            {
                is_it = true;
                cout << "no" << endl;
                return 0;
            }
            else if (E2 > E1 && S2 > S1 && S2 < E1)
            {
                is_it = true;
                cout << "yes" << endl;
                return 0;
            }
        }
    }

    if (!is_it)
    {
        cout << "no" << endl;
    }
}
