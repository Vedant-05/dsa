#include<bits/stdc++.h>

using namespace std;

int main()
{
    string as,bs;
    
    cin>>as>>bs;
    string s = "";

    int n = as.length();


    
    for(int i=0;i<n;i++)
    {
        if(as[i] == bs[i])
        {
            s+='0';
        }
        else
        {
            s+='1';
        }
    }

    cout<<s<<endl;


    return 0;
}
