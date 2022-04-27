#include<stdio.h>
int main()
{
    int n,a[100],i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[j]=a[i];
            j++;
        }

    }
    for(i=j;i<n;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}