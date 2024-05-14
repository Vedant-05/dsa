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
    sort(arr.begin(), arr.end());
    cout << arr[n - 1] << " ";
    for (int i = 1; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << arr[0] << endl;
}
