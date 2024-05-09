#include <bits/stdc++.h>

using namespace std;

int seperateorZeros(int x)
{

    int toReturn = 0;
    int temp = 0;

    while (x)
    {
        if (x % 10 == 0)
        {
            x /= 10;
        }
        else
        {
            toReturn = toReturn + (x % 10) * pow(10, temp);
            x /= 10;
            temp++;
        }
    }

    return toReturn;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int c = a + b;

    int newA = seperateorZeros(a);
    int newB = seperateorZeros(b);
    int newC = seperateorZeros(c);

      if (newA + newB == newC)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
