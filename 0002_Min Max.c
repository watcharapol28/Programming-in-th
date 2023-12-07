#include<stdio.h>
int main()
{
    int m, n;
    int mx = -2e9, mn = 2e9;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if(mn > m) {mn = m;}
        if(mx < m) {mx = m;}
    }
    printf("%d\n%d", mn, mx);
}