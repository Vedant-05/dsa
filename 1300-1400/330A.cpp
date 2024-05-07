#include<bits/stdc++.h>

using namespace std;


int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<char>> cake(r,vector<char>(c));
    
    vector<bool> row(r,true);
    vector<bool> col(c,true);
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            char a;
            cin>>a;
            cake[i][j] = a;
            if(cake[i][j] == 'S')
            {
                row[i] = false;
                col[j] = false;
            }
            
        }
    }
    
    int ans = 0;
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(cake[i][j] == '.')
            {
                if(!row[i] && !col[j])
                {
                    continue;
                }
                else
                {
                    ans++;
                }
            }
        }
    }
    
    cout<<ans<<endl;
    return 0;
    
    
    
    
    
    
    
}
