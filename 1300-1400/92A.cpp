#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int> arr(n);
    for(int i=1;i<=n;i++)
    {
        arr[i-1] = i;
    }
    
    int ans = 0;
    
    int i = 0;
    
    while(m>=arr[i] && m!=0)
    {
        m-=arr[i];
        i++;
        if(i==n)
        {
            i=0;
        }
    }
    cout<<m<<endl;
    return 0;
    
    
}
