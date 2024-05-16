#include <bits/stdc++.h>

using namespace std;

vector<int> parent(100000, -1);
vector<int> size1(100000, 0);

void make_set(int x)
{
    parent[x] = x;
    size1[x] = 1;
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
    if (cp == zp)
    {
        return;
    }

    if (size1[cp] > size1[zp])
    {
        parent[zp] = cp;
        size1[cp] += size1[zp];
    }
    else
    {
        parent[cp] = zp;
        size1[zp] += size1[cp];
    }

    return;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int ans = 0;
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            zeroCount++;
        }
        else
        {
            int c;
            cin >> c;
            if (parent[c] == -1)
            {
                make_set(c);
            }

            for (int i = 1; i < a; i++)
            {
                int z;
                cin >> z;
                if (parent[z] == -1)
                {
                    make_set(z);
                }
                make_union(c, z);
            }
        }
    }

    set<int> s;

    for (int i = 0; i <= m; i++)
    {
        if (parent[i] != -1)
        {
            s.insert(findP(i));
        }
    }

    if (zeroCount == n)
    {
        cout << zeroCount << endl;
        return 0;
    }

    cout << zeroCount + s.size() - 1 << endl;
}
