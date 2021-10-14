#include<bits/stdc++.h>
#define M 100
using namespace std;
int main()
{
    unsigned long long int a[M][2];
    const unsigned int m=1000000007;
    int n=0;
    cin>>n;
    int first=0;
    int second=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j] ;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            a[i][j]=a[i][j]%m ;
        }
    }
    first=a[0][0];
    int temp=a[0][0];
    for(int i=1;i<n;i++)
    {   
        int  t=max(a[i][0],a[i][1]);
        if(t>temp)
            {
                first+=t;
                temp=t;
            }
    }
    temp=a[0][1];
    for(int i=1;i<n;i++)
    {
        int t=max(a[i][0],a[i][1]);
        if(t>temp)
           {
                second+=t;
                temp=t;
           }
    }
    if(first>second)
        cout<<first;
    else
        cout<<second;
    return 0;
}    
