/*
#include<stdio.h>
int main()
{
    int n,d[100],dc,i,j;
    scanf("%d",&n);
    while(n)
    {
        for(i=0;i<n;i++)
        {
            d[i]=n%10;
        }
        n=n/10;
    }
    for(i=0;i<n;i++)
    {
        dc=1;
        for(j=0;j<n;j++)
        {
            if(d[i]==d[j] && i!=j)
            {
                dc++;
            }
        }
    }
    if(dc==1)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}*/
#include<stdio.h>
int main()
{
    int t,n[100],d[100],r[100]={0},temp,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    	scanf("%d",&n[i]);
	}
    for(i=0;i<t;i++)
    {
        temp=n[i];
        while(n[i])
        {
            d[i]=n[i]%10;
            r[i]=(r[i]*10)+d[i];
            n[i]=n[i]/10;
        }
        if(r[i]==temp)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}