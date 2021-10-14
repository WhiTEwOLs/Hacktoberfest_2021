#include <stdio.h>

int profit_maxi(int maxSum, int* a, int n, int* b, int m) {
    int cnt = 0, temp = 0, i = 0, j = 0;
    while(i < n && temp + a[i] <= maxSum)
    {
        temp += a[i];
        cnt += 1;
        i += 1;
    }
    while(j < m && i >= 0)
    {
        temp += b[j];
        j++;
        while(i > 0 && temp > maxSum)
        {
            i--;
            temp -= a[i];
        }
        if(temp <= maxSum && cnt < i+j)
            cnt = i + j;
    }
    return cnt;
}

int main()
{
    int n, m, x, i, result;
    scanf("%d %d %d", &n, &m, &x);
    int a[n], b[m];
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < m; ++i) {
        scanf("%d", &b[i]);
    }
    result = profit_maxi(x, a, n, b, m);
    printf("%d", result);
    return 0;
}
