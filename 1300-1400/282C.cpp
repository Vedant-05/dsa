#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string t;

    cin >> s >> t;

    int n = s.length();
    int m = t.length();

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    if (n == 1)
    {
        if (s[0] == t[0])
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    int ans = 0;

    // if (s == t)
    // {
    //     cout << "YES" << endl;
    //     return 0;
    // }

    bool arrs = true;
    bool arrt = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            arrs = false;
        }
        if (t[i] == '1')
        {
            arrt = false;
        }
    }

    // cout << arrs << " " << arrt << endl;

    if ((arrs && !arrt) || (!arrs && arrt))
    {
        cout << "NO" << endl;
    }

    else
    {
        cout << "YES" << endl;
    }
}
