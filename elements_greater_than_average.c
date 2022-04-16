#include<stdio.h>
int main()
{
    int n,b[100],i,s=0,a,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+b[i];
    }
    a=s/n;
    for(i=0;i<n;i++)
    {
        if(b[i]>=a)
        {
            c++;
        }
    }
    printf("%d",c);
    
}