#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0,dc=0,s=0;
    float avg;
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
            if(a[i]==a[j] && i!=j && a[i]>=0)
            {
                c++;
                a[j]=-1;
            }
        }
        if(c==a[i])
        {
            dc++;
            s=s+a[i];
        }
    }
    if(dc==0)
    {
        printf("-1");
    }
    else
    {
        avg=(float)s/dc;
        printf("%.2f",avg);
    }
}