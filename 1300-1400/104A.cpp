#include<bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin>>n;
    n-=10;
    if(n<1) {cout<<0<<endl; return 0;}
    if(n>11) {cout<<0<<endl; return 0;}
    int arr[12] = {0,4,4,4,4,4,4,4,4,4,15,4};
    cout<<arr[n]<<endl;
    return 0;
                  
}


