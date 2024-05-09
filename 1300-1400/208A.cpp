#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;

    string toFind = "WUB";

    int i = 0;
    int j = 1;
    int k = 2;

    string newQ = "";
    while (k < s.length())
    {
        if (s[i] == 'W')
        {
            if (s[j] == 'U')
            {
                if (s[k] == 'B')
                {
                    s.replace(i, 3, " ");
                }
            }
        }
        i++;
        j++;
        k++;
    }

    i = 0;
    j = 1;

    while (j < s.length())
    {
        if (s[i] == ' ')
        {
            if (s[j] == ' ')
            {
                s.replace(i, 2, " ");
            }
        }
        i++;
        j++;
    }

    cout << s << endl;
}
