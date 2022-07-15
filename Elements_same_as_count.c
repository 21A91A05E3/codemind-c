#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=1,tc=0;
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
                a[j]=-1;
            }
        }
        if(a[i]==c)
        {
            tc++;
            printf("%d ",a[i]);
        }
    }
    if(tc==0)
    {
        printf("-1");
    }
}