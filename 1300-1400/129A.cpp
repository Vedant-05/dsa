#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<int> temp(n);
    int total = 0;
    for(int i=0;i<n;i++)
    {
        cin>> temp[i];
        total+=temp[i];
    }
    int ans = 0;
    if(total%2 == 0)
    {
        for(int i=0;i<n;i++)
        {
            if(temp[i]%2 == 0)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
        return 0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(temp[i]%2 != 0)
            {
                ans++;
            }
        }
        
        cout<<ans<<endl;
        return 0;
    }
    
    
    return 0;
    
}
