#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d ",i);
        } 
    }    
    else
    {
        printf("The Number Series is Not Possible Print");
    }

}