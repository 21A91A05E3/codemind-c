#include<stdio.h>
int main()
{
    int n,a[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            if((a[n-1]%2==0&&a[i+1]%2!=0)||(a[n-1]%2!=0&&a[i+1]%2==0))
            {
                c++;
            }
        }
        else if(i==n-1)
        {
            if((a[i-1]%2==0&&a[0]%2!=0)||(a[i-1]%2!=0&&a[0]%2==0))
            {
                c++;
            }
 
        }
        else
        {
            if((a[i-1]%2==0&&a[i+1]%2!=0)||(a[i-1]%2!=0&&a[i+1]%2==0))
            {
                c++;
            }
        }
    }
    printf("%d",c);
}