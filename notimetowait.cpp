#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n,h,x,sum1,sum2;
    cin>>n >>h >>x;
    vector <unsigned int> vec;
    while(n--)
    {
        unsigned int temp;
        cin>> temp;
        vec.push_back(temp);
    }
    sum1=h-x;
    sort(vec.begin(),vec.end(),greater <unsigned int> ());
    if(vec[0]>=sum1)
        cout<<"YES";
    else   
        cout<<"NO";
    
    return 0;
}