#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],d[n],i,j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            d[j]=0;
            j++;
        }
    }
    while(j<n)
    {
        d[j]=1;
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",d[i]);
    }
}