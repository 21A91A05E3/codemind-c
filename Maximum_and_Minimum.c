#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=1,max=0,min=999,tc=0;
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
            if(a[i]==a[j] && i!=j )
            {
                c++;
            }
        }
        if(a[i]==c)
        {
            tc++;
            if(a[i]>=max)
            {
                max=a[i];
            }
            if(a[i]<=min)
            {
                min=a[i];
            }
        }
    }
    if(tc>0)
    printf("%d %d",min,max);
    else
    printf("-1");
}