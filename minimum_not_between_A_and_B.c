#include<stdio.h>
int main()
{
    int n,i,x[100],a,b,min=100;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(x[i]>=a && x[i]<=b)
        {
            continue;
        }
        else
        {
            if(min>x[i])
            {
                min=x[i];
            }
        }
    }
    if(min==100)
    {
        printf("-1");
    }
    else
    {
        printf("%d",min);
    }
}