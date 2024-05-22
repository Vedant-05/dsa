
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string temp;

    for (int i = 0; i < s.length(); i++)
    {

        if (temp.length() >= 2)
        {
            if (temp[temp.length() - 1] == s[i] && temp[temp.length() - 2] == s[i])
            {
                continue;
            }
            else
            {
                temp += s[i];
            }
        }
        else
        {
            temp += s[i];
        }
    }

    string ans;

    for (int i = 0; i < temp.length(); i++)
    {
        if (ans.length() >= 3)
        {
            if (ans[ans.length() - 1] == temp[i] && ans[ans.length() - 2] == ans[ans.length() - 3])
            {
                continue;
            }
            else
            {
                ans += temp[i];
            }
        }
        else
        {
            ans += temp[i];
        }
    }

    cout << ans << endl;
}
