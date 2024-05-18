#include <bits/stdc++.h>
using namespace std;


bool cyclePresent(vector<int> arr,int n)
{

    int len = 0;

    for(int i=0;i<n;i++)
    {
        int ind = i;
        if(arr[ind]!=-1 && arr[arr[ind]] == i)
        {
            return true;
        }
    }

    return false;
}

int main()
{
   int n;
   cin>>n;

   vector<int> arr(n);
   int currFixed = 0;
   for(int i=0;i<n;i++)
   {
    int a;
    cin>>a;
    arr[i] = a;
    if(i == a)
    {
        currFixed++;
        arr[i] = -1;
    }   


   }
   if(currFixed == n)
    {
        cout<<currFixed<<endl;
        return 0;
    }
    else if(currFixed == n-2)
    {
        cout<<currFixed+2<<endl;
        return 0;
    }
    else
    {
        if(cyclePresent(arr,n))
        {
            cout<<currFixed+2<<endl;
            return 0;
        }
        else
        {
            cout<<currFixed+1<<endl;
            return 0;
        }
    }
}
