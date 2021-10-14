#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> exp,bon;
    int inp=0;
    int n=0;
    int ex=0;
    cin>>n;cout<<endl;
    cin>>ex;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        exp.push_back(inp);
    }
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        bon.push_back(inp);
    }

    map < int , int > mp;

    for(int i=0;i<n;i++)
    {
        mp.insert(make_pair(exp[i],bon[i]));
    }
    inp=0;
    for(auto x: mp)
    {
        if(ex>=x.first)
            {ex+=x.second;inp++;}
    }
    cout<<inp;


    return 0;
    
}