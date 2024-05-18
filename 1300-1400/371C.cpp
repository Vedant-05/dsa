#include <bits/stdc++.h>

using namespace std;

bool possible(long long toMake, int breq, int sreq, int creq, int nb, int ns, int nc, int pb, int ps, int pc, long long r)
{
    long long reqB = breq > 0 ? (toMake * breq) - nb : 0;
    long long reqS = sreq > 0 ? (toMake * sreq) - ns : 0;
    long long reqC = creq > 0 ? (toMake * creq) - nc : 0;

    // cout<<reqB<<" "<<reqS<<" "<<reqC<<endl;

   reqB = reqB<0?0:reqB;
   reqC = reqC<0?0:reqC;
   reqS = reqS<0?0:reqS;


    if (r >= (reqB * pb + reqS * ps + reqC * pc))
    {    
        //  cout<<r<<" "<<reqB<<' '<<breq<<" "<<nb<<" "<<reqS<<" "<<reqC<<" "<<toMake<<endl;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    int breq = 0, sreq = 0, creq = 0;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            breq++;
        }
        else if (s[i] == 'S')
        {
            sreq++;
        }
        else
        {
            creq++;
        }
    }

    int nb, ns, nc, pb, ps, pc;
    long long r;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;

    long long start = 0;

    long long end = 1e14;
    long long maxAns = 0;
    while (start < end)
    {

        long long mid = start + (end - start) / 2;

        if (possible(mid, breq, sreq, creq, nb, ns, nc, pb, ps, pc, r))
        {
            start = mid + 1;
            maxAns = max(mid, maxAns);
        }
        else
        {
            end = mid;
        }
    }

    cout << maxAns << endl;
}
