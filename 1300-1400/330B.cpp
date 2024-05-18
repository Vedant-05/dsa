#include <bits/stdc++.h>
using namespace std;



int main()
{
   int n,m;
   cin>>n>>m;
   vector<int> canMake(n+1,0);

   for(int i=0;i<m;i++)
   {
    int a,b;
    cin>>a>>b;
   canMake[a] = -1;
   canMake[b] = -1;
   }
   int req = 0;

   for(int i=1;i<=n;i++)
   {
       if(canMake[i] == 0)
       {
        req = i;
        break;
       }
   }
   cout<<n-1<<endl;
   for(int i=1;i<=n;i++)
   {
    if(i!=req)
    {
        cout<<req<<" "<<i<<endl;
    }
   }

}
