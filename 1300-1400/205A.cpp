#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i][0] = a;
        arr[i][1] = i + 1;
    }

    sort(arr.begin(), arr.end());

    if (n >= 2)
    {
        if (arr[0][0] == arr[1][0])
        {
            cout << "Still Rozdil" << endl;
            return 0;
        }
        else
        {
            cout << arr[0][1] << endl;
            return 0;
        }
    }
    else
    {
        cout << 1 << endl;
    }
}
