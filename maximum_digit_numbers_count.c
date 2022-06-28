#include<stdio.h>
int countd(int n)
{
    int d,c=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    return c;
}
int main()
{
    int n,a[100],k,i,mdc=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=countd(a[i]);
        if(k>=mdc)
        {
            mdc=k;
        }
    }
    for(j=0;j<n;j++)
    {
        if(countd(a[j])==mdc)
        {
            printf("%d ",a[j]);
        }
    }
    
}