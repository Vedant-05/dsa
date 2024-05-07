#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    if(n==1) {cout<<0<<endl;return 0;}
    vector<int> temp(n);
    cin>> temp[0];
    int count = 0;
    int mini = temp[0];
    int maxi = temp[0];
     
         
    for(int i=1;i<n;i++)
    {
        cin>> temp[i];
        if(temp[i]> maxi)
        {
            count++;
            maxi=temp[i];
        }
        else if(temp[i]<mini)
        {
            count++;
            mini = temp[i];
        }
    }
    
    cout<<count<<endl;
    return 0;
    
    
}
