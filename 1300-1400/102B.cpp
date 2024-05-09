#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;

    if (a.length() <= 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int count = 0;
    while (a.length() > 1)
    {
        int currSum = 0;
        for (int i = 0; i < a.length(); i++)
        {
            currSum += (a[i] - '0');
        }
        a = to_string(currSum);
        count++;
    }

    cout << count << endl;
    return 0;
}
