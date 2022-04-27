#include<stdio.h>
int main()
{
    int n,ar[1000],i,max=0,a,b,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]<a || ar[i]>b)
        {
            if(ar[i]>=max)
            {
                c++;
                max=ar[i];
            }
        }
    }
    if(c!=0)
    printf("%d",max);
    else
    printf("-1");
}