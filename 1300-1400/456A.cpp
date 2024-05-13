#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y;

    cin >> n;

    vector<vector<int>> temp(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        temp[i][0] = a;
        temp[i][1] = b;
    }

    sort(temp.begin(), temp.end());

    bool flag = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (temp[i][1] > temp[i + 1][1])
        {
            flag = false;
            cout << "Happy Alex" << endl;
            break;
        }
    }
    if (flag)
    {
        cout << "Poor Alex" << endl;
    }

    return 0;
}
