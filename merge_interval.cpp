#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< vector <int> >vec,mec;
    int temp1,temp2;
    vec.push_back({1,3});
    vec.push_back({2,6});
    vec.push_back({8,10});
    vec.push_back({15,20});

    for(int i=0;i<vec.size()-1;i++)
    {
        temp1=vec[i][1];
        for(int j=i+1;j<vec.size();j++)
        {
            if(temp1<=vec[j][0])
                continue;
            else
                {
                    mec.push_back({vec[i][0],vec[j][1]});
                }
        }
    }

    for(int i=0;i<mec.size();i++)
    {
        temp1=mec[i][1];
        for(int j=0;j<vec.size();j++)
        {
            if(temp1<vec[j][0])
            {
                mec.push_back({vec[j][0],vec[j][1]});
            }
        }
    }
    for (int i = 0; i < mec.size(); i++) 
    {
        for (int j = 0; j < mec[i].size(); j++)
            cout << mec[i][j] << " ";
        cout << endl;
    }    
    return 0;
}