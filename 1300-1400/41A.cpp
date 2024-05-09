#include <bits/stdc++.h>

using namespace std;

int main()
{
   string a,b;
   cin>>a>>b;
   int n = a.length();
   int m = b.length();
   if(n!=m)
   {
       cout<<"NO"<<endl;
       return 0;
   }
   
   int i=0;
   int j=n-1;
   while(i!=n)
   {
       if(a[i]==b[j])
       {
           i++;
           j--;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
   
   cout<<"YES"<<endl;
}
