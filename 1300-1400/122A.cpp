#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a;
    cin >> a;

    vector<double> arr = {4, 44, 47, 444, 7, 77, 777, 447, 474, 744, 477, 747, 774};

    for (int i = 0; i < arr.size(); i++)
    {
        if (ceil(a / arr[i]) == floor(a / arr[i]))
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
