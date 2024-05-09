#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    int mid = (n - 1) / 2;

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    vector<int> rarr = arr;

    reverse(rarr.begin(), rarr.end());

    if (k > mid)
    {
        int i = n - 2;
        int j = n - 1;
        k = n - 1 - k;
        while (k)
        {
            swap(rarr[i], rarr[j]);
            k--;
            i -= 2;
            j -= 2;
        }
        for (int x = 0; x < n; x++)
        {
            cout << rarr[x] << " ";
        }
        cout << endl;

        return 0;
    }
    else
    {
        int i = n - 2;
        int j = n - 1;
        while (k)
        {
            swap(arr[i], arr[j]);
            k--;
            i -= 2;
            j -= 2;
        }

        for (int x = 0; x < n; x++)
        {
            cout << arr[x] << " ";
        }
        cout << endl;

        return 0;
    }

    cout << endl;
    return 0;

    return 0;
}
