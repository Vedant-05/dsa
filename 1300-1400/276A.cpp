#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;
    
   
    
    int maxFun = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(b>k)
        {
            maxFun = max(maxFun, a - (b-k));
        }
        else
        {
        maxFun = max(maxFun,a);
        }
    }
    
    cout<<maxFun<<endl;
    
    return 0;
}
