#include<bits/stdc++.h>

using namespace std;


int main()
{
   int n,k;
   
   cin>>n>>k;
   
   
       int temp =k<n? k : k-n;
        int std = n-1;
        int dummy = k<n ?0 :1;
   
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(j==std)
               {
                   cout<<temp<<" ";
               }
               else
               {
                   cout<<dummy<<" ";
               }
           }
           std--;
           cout<<endl;
      }
   
 
  
    
    
}
