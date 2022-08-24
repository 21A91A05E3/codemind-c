#include<stdio.h>
int main()
{
    int n,m,a[100],i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=m;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
}