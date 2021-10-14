#include<iostream>
#include<algorithm>
using namespace std;

int main() 
{
	int t, i, n;
	scanf("%d", &t);
	int arr[t];
	n = t;
	while(t--)
		scanf("%d", &arr[t]);
	sort(arr, arr + n);
	for(i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	return 0;
}