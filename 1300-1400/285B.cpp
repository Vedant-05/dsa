#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, t;

    cin >> n >> s >> t;

    if (s == t)
    {
        cout << 0 << endl;
        return 0;
    }

    vector<int> defaultArray(n);

    for (int i = 0; i < n; i++)
    {
        defaultArray[i] = i + 1;
    }

    vector<int> shuffle(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        shuffle[i] = a;
    }

    vector<int> newArr(n);
    int curr = s - 1;

    for (int i = 0; i < n; i++)
    {
        if (i != 0 && curr == s - 1)
        {
            cout << -1 << endl;
            return 0;
        }

        curr = shuffle[curr] - 1;

        if (curr == t - 1)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}
