#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    int j = 1;
    int k = 2;

    while (i < s.length())
    {
        if (s[i] == '1' && (j < s.length() && s[j] == '4') && (k < s.length() && s[k] == '4'))
        {
            i += 3;
            j += 3;
            k += 3;
        }
        else if (s[i] == '1' && (j < s.length() && s[j] == '4'))
        {
            i += 2;
            j += 2;
            k += 2;
        }
        else if (s[i] == '1')
        {
            i++;
            j++;
            k++;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
