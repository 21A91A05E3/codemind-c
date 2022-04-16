#include<stdio.h>
int main()
{
    int n,a[1000],i,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c++;
        }
    }
    printf("%d",c);
    
}