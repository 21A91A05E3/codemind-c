
#include<stdio.h>
int main()
{
    int n,ar[100],i,a,b,c=0,m=99999;
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
            continue;
        }
        else
        {
            c++;
            if(ar[i]<=m)
            {
                m=ar[i];
            }
            
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",m);
    }
}