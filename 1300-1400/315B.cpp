#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> arr(a);
    int addedVal = 0;

    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    for (int i = 0; i < b; i++)
    {
        int x, y, z;
        cin >> x;

        if(x == 1)        {
            cin>>y;
            cin>>z;
          
            arr[y-1] = z-addedVal;
        }
        else if(x==2)
        {
            cin>>y;
            addedVal+=y;
        }
        else
        {
            cin>>y;
            cout<<arr[y-1]+addedVal<<endl;
        }
    }
}
