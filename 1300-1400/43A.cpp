#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    map<string, int> mp;
    string highest = "";
    int maxGoal = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (maxGoal < mp[s])
        {
            maxGoal = mp[s];
            highest = s;
        }
    }

    cout << highest << endl;
    return 0;
}
