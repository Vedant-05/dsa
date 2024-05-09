#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> work(m);

    long long int currentH = 1;
    long long int currentT = 0;

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        work[i] = a;
        if (a >= currentH)
        {
            currentT += a - currentH;
            currentH = a;
        }
        else
        {
            currentT += n - currentH;
            currentT += a;
            currentH = a;
        }
    }

    cout << currentT << endl;
    return 0;
}
