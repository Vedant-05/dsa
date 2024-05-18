#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int one_two = 0;
    int two_third = 0;
    int third_one = 0;

    while (a != 0 && b != 0 && c != 0)
    {
        if (a > b && a > c)
        {
            a -= 2;
            b--;
            c--;
            one_two++;
            third_one++;
        }
        else if (b > a && b > c)
        {
            a--;
            b -= 2;
            c--;
            two_third++;
            one_two++;
        }
        else
        {
            a--;
            b--;
            c -= 2;
            two_third++;
            third_one++;
        }
    }

    if (a == 0 && b == 0 && c == 0)
    {
        cout << one_two << " " << two_third << ' ' << third_one << endl;
    }
    else if (a == 0 && b == c)
    {
        two_third += b;
        cout << one_two << " " << two_third << ' ' << third_one << endl;
    }

    else if (b == 0 && a == c)
    {
        third_one += a;
        cout << one_two << " " << two_third << ' ' << third_one << endl;
    }
    else if (c == 0 && a == b)
    {
        one_two += a;
        cout << one_two << " " << two_third << ' ' << third_one << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }
}
