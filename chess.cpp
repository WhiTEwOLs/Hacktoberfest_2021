#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,t=0;
        //string arr[8][8];
        cin>>n;
        n=n-1;
        
        cout<<"O";
        for(int i=0;i<1;i++)
        {
            for(int j=1;j<8;j++)
            {
                if(t<n)
                    {cout<<".";t++;}
                else
                    cout<<"X";
            }
            cout<<endl;
        }


        for(int i=1;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(t<n)
                    {cout<<".";t++;}
                else
                    cout<<"X";
            }
            cout<<endl;
        }
        
        // for(int i=0;i<8;i++)
        // {
        //     for(int j=0;i<8;j++)
        //     {
        //         cout<<arr[i][j];
        //     }
        //     cout<<endl;
        // }
    }
    return 0;
}