#include<stdio.h>
int main()
{
    int n,d[100],dc,i=0,j,t,flag=0;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        d[i]=n%10;
        n=n/10;
        dc++;
        i++;
    }
    for(i=0;i<dc;i++)
    {
        for(j=0;j<dc;j++)
        {
            if(i!=j && d[i]==d[j] )
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}