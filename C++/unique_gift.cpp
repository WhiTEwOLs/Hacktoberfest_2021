#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    int t=0;
    cin>>n;

    cin>>k;
    for(int i=1;i<=n;i++)
    {
        for(int kk=1;kk<=k;kk++)
        {
            for(int j=1;j<=n;j++)
                {
                    if(j%i==0)
                       {
                            t++;
                            // cout<<i<<" "<<j<<endl;
                       }
                }
        }
    }
    cout<<t/2;
    return 0;
}