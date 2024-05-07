#include<bits/stdc++.h>



using namespace std;


int main()
{
    int x1,y1;
    cin>>x1>>y1;
    
    bool isX1Neg = x1<0?1:0;
    bool isY1Neg = y1<0?1:0;
    
    int a = abs(x1);
    int b = abs(y1);
    
    int reqVar = a+b;
    
    if(isX1Neg && isY1Neg)
    {
        cout<<-1*reqVar<<" "<<0<<" "<<0<<" "<<-1 * reqVar<<endl;
        return 0;
    }
    else if(isX1Neg && !isY1Neg)
    {
         cout<<-1*reqVar<<" "<<0<<" "<<0<<" "<<reqVar<<endl;
        return 0;
    }
    else if(!isX1Neg && isY1Neg)
    {
         cout<<0<<" "<<-1*reqVar<<" "<<reqVar<<" "<<0<<endl;
        return 0;
        
    }
    else
    {
         cout<<0<<" "<<reqVar<<" "<<reqVar<<" "<<0<<endl;
        return 0;
    }
    
    return 0;
    
    
    
    
    
    
    
}
