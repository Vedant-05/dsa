#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    if (n <= 2)
    {
        cout << n << endl;
        return 0;
    }
    int i = 2;
    long long int sum = 0;
    int currMax = 2;
    int maxAns = 2;
    for (i; i < n; i++)
    {
        if (arr[i - 1] + arr[i - 2] == arr[i])
        {
            currMax++;
            maxAns = max(maxAns, currMax);
        }
        else
        {
            currMax = 2;
        }
    }

    cout << maxAns << endl;
    return 0;
}
