#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j && a[i]>0)
            {
                c++;
                a[j]=-1;
            }
        }
        if(c>1)
        {
            printf("%d",a[i]);
        }
    }
}