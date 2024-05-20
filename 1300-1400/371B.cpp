#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a ,b;
   cin>>a>>b;
   int gcdab  = __gcd(a,b);
   int newa = a/gcdab;
   int newb = b/gcdab;
   int res = 0;
   
   while(newa && newa%5 == 0)
   {
        newa = newa/5;
        res++;
   }
   while(newa && newa%3 == 0)
   {
        newa = newa/3;
        res++;
   }
   while(newa && newa%2 == 0)
   {
        newa = newa/2;
        res++;
   }
   while(newb && newb%5 == 0)
   {
        newb = newb/5;
        res++;
   }
   while(newb && newb%3 == 0)
   {
        newb = newb/3;
        res++;
   }
   while(newb && newb%2 == 0)
   {
        newb = newb/2;
        res++;
   }

   if(newa == newb)
   {
    cout<<res<<endl;
   }
   else
   {
    cout<<-1;
   }

}
