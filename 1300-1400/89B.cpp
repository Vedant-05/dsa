#include<bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
    
    
    int m = n*2 + 1;
    
    vector<vector<int>> ans(m,vector<int>(m,-1));
    
    bool upScircle = true;
    
     int neg = 0;
    
     
     for(int i=0;i<m;i++)
     {   
     
     if(i<=m/2)
     {
         neg = i;
     }
     else
     {
         neg=neg-1;
     }
         int start = 0;
         
    
         for(int j=0;j<m;j++)
         {  
             if(j>= m/2-neg && j<=m/2+neg)
             {
                 ans[i][j] = (start);
                 if(j>=m/2)
             {
                 start--;
             }
             else
             {
                 start++;
             }
             }
            
             
         }
     }

 
    
for (int i = 0; i < m; i++) {
        string s = "";
        // Check if it's the first row
       
        bool zeroEncounter = false;
        for (int j = 0; j < m; j++) {
            if (ans[i][j] == -1) {
                s += "  ";
            } else {
                s += to_string(ans[i][j]);
                if(ans[i][j] == 0)
            {
                if(zeroEncounter || i==0 || i==m-1)
                {
                    break;    
                }
                {
                    zeroEncounter=true;
                }
                
            }
                s += " ";
            }
            
        }
        cout << s << endl;
    }
    
    
    
    
    
    return 0;
    
    
    
    
}
