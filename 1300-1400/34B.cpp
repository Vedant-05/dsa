#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int> arr(n);
    
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<0)
        {
            arr[i] = abs(a);
        }
        else
        {
            arr[i] = -1 * a;
        }
    }
    
    sort(arr.begin(),arr.end());
    
    int maxSum = 0;
    
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<=0 || m==0)
        {
            break;
        }
        else
        {
            maxSum+=arr[i];
            m--;
        }
    }
    cout<<maxSum<<endl;
    return 0;
    
}
