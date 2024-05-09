#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int minFront = a + 1;
    int maxBack = n - b;

    int maxi = max(minFront, maxBack);

    cout << n - maxi + 1 << endl;
}
