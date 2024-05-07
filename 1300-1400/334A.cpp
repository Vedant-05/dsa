#include<bits/stdc++.h>


using namespace std;



int main()
{
    int n;
    cin>>n;
    int temp = n * n;
    vector<vector<int>> ans(n,vector<int>(n));
    
    int i = 0;
    int j = 0;
    ans[i][j] = 1;
    int curr = 1;
    i++;
    int downward = 1;
    while(i<n && j<n)
    {
        if(downward == 1)
        {
            ans[i][j] = curr+1;
            curr++;
            if(i == n-1)
            {
                j++;
                downward=-1;
            }
            else
            {
                i++;
            }
        }
        else if(downward == -1)
        {
            ans[i][j] = curr+1;
            curr++;
            if(i==0)
            {
                j++;
                downward = 1;
            }
            else
            {
                j--;
            }
            
        }
    }
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
