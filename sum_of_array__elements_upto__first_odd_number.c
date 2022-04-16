#include<stdio.h>
int main()
{
    int n,a[100],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            break;
        }
        else
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}