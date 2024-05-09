#include <bits/stdc++.h>
using namespace std;
int main()
{

    int s,n;
    cin>>s>>n;
    
    int currS = s;
    
    vector<vector<int>> arr(n,vector<int>(2));
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i][0] = a;
        arr[i][1] = b;
        
    }
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]<currS)
        {
            currS+=arr[i][1];
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    cout<<"YES"<<endl;
}
