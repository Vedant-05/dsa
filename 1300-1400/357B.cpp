#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,m,a,b,c;
    while(cin>>n>>m)
    {
        map<int,int>color;
        for(i=0;i<m;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(!color[a] && !color[b] && !color[c])
            {
                color[a]=1;
                color[b]=2;
                color[c]=3;
            }
            else if(color[a])
            {
                if(color[a]==1) color[b]=2,color[c]=3;
                else if(color[a]==2) color[b]=3,color[c]=1;
                else color[b]=1,color[c]=2;
            }
            else if(color[b])
            {
                if(color[b]==1) color[a]=2,color[c]=3;
                else if(color[b]==2) color[a]=3,color[c]=1;
                else color[a]=1,color[c]=2;
            }
            else if(color[c])
            {
                if(color[c]==1) color[b]=2,color[a]=3;
                else if(color[c]==2) color[b]=3,color[a]=1;
                else color[b]=1,color[a]=2;
            }
        }
        for(i=1;i<=n;i++) printf("%d ",color[i]);
        
    }
    return 0;
}
