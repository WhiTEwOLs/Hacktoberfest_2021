/*
Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in union.

Example 1:

Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
Example 2:

Input:
6 2 
85 25 1 32 54 6
85 2 
Output: 
7
Explanation: 
85, 25, 1, 32, 54, 6, and
2 are the elements which comes in the
union set of both arrays. So count is 7
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> a {1,4,2,8,4,-3};
    vector <int> b {4,5,2,90,0};
    vector <int> c;
    // sort(a.begin(),a.end()); optional 
    // sort(b.begin(),b.end());
    merge(a.begin(),a.end(),b.begin(),b.end(),c.begin());
 
    set <int ,greater <int> > s1;
    for(int i=0;i<c.size();i++)
    {
        s1.insert(c[i]);
    }

    cout<<s1.size();

    return 0;
}