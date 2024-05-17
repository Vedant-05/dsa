#include <bits/stdc++.h>

using namespace std;
long long int max(long long int a, long long int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<long long int> heights(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        heights[i] = a;
    }

    int m;
    cin >> m;
    long long int L = 0;
    long long int h1 = 0;

    for (int j = 0; j < m; j++)
    {
        int x, y;
        cin >> x >> y;

        L = max(L + h1, heights[x - 1]);
        h1 = y;

        cout << L << endl;
    }
}
