#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a="";
        cin>>a;
        int tt=0;
        for(int i=0;i<a.length()-1;i++)
        {
            if(a[i]!=a[i+1])
                tt+=1;
        }
        if((tt%2==0) && (tt!=0) && a[0]=='0')
            cout<<(tt)/2<<"\n";
        else if (tt%2!=0 && a[0]=='0')
        {
            cout<<(tt/2)+1<<"\n";
        }
        else if (tt%2!=0 && a[0]=='1' && tt>1)
        {
            cout<<(tt-1)<<"\n";
        }
         else if (tt%2!=0 && a[0]=='1')
        {
            cout<<(tt)<<"\n";
        }
        else if (tt%2==0 && a[0]=='1' && (tt!=0))
        {
            cout<<(tt/2)+1<<"\n";
        }         
        else
            cout<<a[0]<<"\n";
        // cout<<"\n";
    }
    return 0;
}