/*
Given an array of size n and a number k, find all elements that appear more than n/k times
Difficulty Level : Hard
Last Updated : 22 Jun, 2021
Given an array of size n, find all elements in array that appear more than n/k times. For example, if the input arrays is {3, 1, 2, 2, 1, 2, 3, 3} and k is 4, then the output should be [2, 3]. Note that size of array is 8 (or n = 8), so we need to find all elements that appear more than 2 (or 8/4) times. There are two elements that appear more than two times, 2 and 3. 
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec{3, 1, 2, 2, 1, 2, 3, 3};
    vector <int> c;
    int k=4;
    int z=vec.size()/k;
    int cou=0;
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {   
        cou=0;
        cou=count(vec.begin(),vec.end(),vec[i]);
        if (cou>z)
            cout<<vec[i]<<" ";
        i+=cou-1;
    }
    return 0;
}