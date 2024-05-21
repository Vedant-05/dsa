#include <bits/stdc++.h>

using namespace std;

vector<int> parent(100000, -1);
vector<int> size1(100000, 0);

void make_set(int x)
{
    parent[x] = x;
    size1[x] = 1;

    // cout << x << endl;
}

int findP(int x)
{
    if (x != parent[x])
        parent[x] = findP(parent[x]);

    return parent[x];
}

void make_union(int c, int z)
{
    int cp = findP(c);
    int zp = findP(z);
    // cout << cp << " " << zp << endl;
    // cout << findP(c) << " " << findP(z) << endl;
    if (cp == zp)
    {
        return;
    }

    if (size1[cp] > size1[zp])
    {
        parent[zp] = cp;
        size1[cp] += size1[zp];
        // cout << "size1[cp]" << " " << size1[cp] << endl;
    }
    else
    {
        parent[cp] = zp;
        size1[zp] += size1[cp];
        // cout << "size1[zp]" << " " << size1[zp] << endl;
    }

    return;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        make_set(i);
    }

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        // if (parent[a] == -1)
        // {
        //     make_set(a);
        // }
        // if (parent[b] == -1)
        // {
        //     make_set(b);
        // }
        make_union(a, b);
    }

    int singleSize = 0, twoSize = 0, threeSize = 0;

    vector<int> singles;
    vector<int> pairs(100, -1);
    map<int, vector<int>> twoes;
    map<int, vector<int>> threes;

    for (int i = 0; i < n; i++)
    {
        int pp = findP(i);
        int cap = size1[pp];
        // cout << pp << " " << i << " " << size1[pp] << endl;

        if (cap == 1)
        {
            singleSize++;
            singles.push_back(i);
        }
        else if (cap == 2)
        {
            twoSize++;
            twoes[pp].push_back(i);
        }
        else if (cap == 3)
        {
            threeSize++;
            threes[pp].push_back(i);
        }
        else
        {
            cout << "-1" << endl;
            return 0;
        }
    }

    twoSize /= 2;

    if (singleSize < twoSize)
    {
        cout << "-1" << endl;
    }

    if ((singleSize - twoSize) % 3 != 0)
    {
        cout << "-1" << endl;
    }

    for (auto x : threes)
    {
        for (auto c : x.second)
        {
            cout << c + 1 << " ";
        }
        cout << endl;
    }

    int i = 0;

    for (auto x : twoes)
    {
        for (auto y : x.second)
        {
            cout << y + 1 << " ";
        }

        if (i < singles.size())
        {
            cout << singles[i] + 1 << endl;
            i++;
        }
    }
    int temp = 0;

    for (; i < singles.size(); i++)
    {
        cout << singles[i] + 1 << " ";
        temp++;
        if (temp == 3)
        {
            cout << endl;
        }
    }
}
