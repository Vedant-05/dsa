#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool neg = false;

    queue<int> prodPos;
    queue<int> prodZer;
    queue<int> pordNeg;

    int posSize = 0;
    int zerSize = 0;
    int negSize = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a < 0)
        {

            pordNeg.push(a);
            negSize++;
            neg = true;
        }
        else if (a == 0)
        {
            prodZer.push(a);
            zerSize++;
        }
        else
        {
            prodPos.push(a);
            posSize++;
        }
    }

    if (posSize == 0)
    {
        int a = pordNeg.front();
        pordNeg.pop();
        int b = pordNeg.front();
        pordNeg.pop();
        prodPos.push(a);
        prodPos.push(b);
        posSize += 2;
        negSize -= 2;
    }

    while (pordNeg.size() != 1)
    {
        int a = pordNeg.front();
        pordNeg.pop();
        negSize--;
        zerSize++;
        prodZer.push(a);
    }

    cout << negSize << " ";
    while (!pordNeg.empty())
    {
        cout << pordNeg.front() << " ";
        pordNeg.pop();
    }
    cout << endl;

    cout << posSize << " ";
    while (!prodPos.empty())
    {
        cout << prodPos.front() << " ";
        prodPos.pop();
    }
    cout << endl;

    cout << zerSize << " ";
    while (!prodZer.empty())
    {
        cout << prodZer.front() << " ";
        prodZer.pop();
    }
    cout << endl;
}
