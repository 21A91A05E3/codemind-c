#include<stdio.h>
int main()
{
    int n,a[1000],i,k,j,c1=0,c2=0,x,y;
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
            c1++;
            x=i;
            break;
        }
    }
    for(j=n-1;j>=0;j--)
    {
        if(a[j]==k)
        {
            c2++;
            y=j;
            break;
        }
    }
    if(c1!=0 and c2!=0)
    printf("%d %d ",x,y);
    else
    printf("-1 -1");
}