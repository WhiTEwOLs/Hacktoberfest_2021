#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    int k,p;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>p;
        vec.push_back(p);
    }
    sort(vec.begin(),vec.end());
    int cou=0;
    int prev=0;
    for(int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            int k1=(vec[i] & vec[j])*2;
            int k2=(vec[i] | vec[j]);
            if( k1 < k2 )
                {
                    cou++;
                    cout<<vec[i]<<" "<<vec[j]<<" "<<k1<<" "<<k2<<endl;
                }
        }
        if(cou>prev)
            prev=cou;

        cou=0;
    }

    cout<<prev/2;
    return 0;
}